#include "database.h"

QSqlDatabase DatabaseManager::Tetra;

void DatabaseManager::createDatabaseConnection(QString& dbName, QSqlDatabase& db, QString dbConnection) {
    // Create a connection to the SQLite database or create one if not exist
    db = QSqlDatabase::addDatabase("QSQLITE", dbConnection);
    db.setDatabaseName(dbName); // Name of the SQLite database file
    qDebug() << "Database" << db.databaseName() << "connection is created sucessfully";
}

bool DatabaseManager::openDatabase(QSqlDatabase& db){
    if (!db.isOpen()) {
        // Attempt to open the provided database
        if (!db.open()) {
            // Error handling
            QSqlError error = db.lastError();
            qDebug() << "Error: " << error.text();
            return false;
        }
        else{
            qDebug() << "Database" << db.databaseName() << "is opened sucessfully";
        }
    } else {
        qDebug() << "Database" << db.databaseName() << "is already open";
    }
    return true;
}


void DatabaseManager::closeDatabase(QSqlDatabase& db) {
    // Check if the database connection is valid and open
    if (!db.isValid() || !db.isOpen()) {
        qDebug() << "Error: Database is not open or is invalid";
        return;
    }

    // Close the database
    db.close();

    // Check if the database is still open after closing
    if (db.isOpen()) {
        qDebug() << "Error: Failed to close database";
    } else {
        qDebug() << "Database closed successfully";
    }
}

bool DatabaseManager::createTable(QSqlDatabase& db, QString& tableName, QString& tableDefinition) {
    // Check if the database connection is valid and open
    if (!db.isValid() || !db.isOpen()) {
        qDebug() << "Error: Database is not open or is invalid";
        return false;
    }

    // Create a QSqlQuery object for executing SQL commands
    QSqlQuery query(db);

    // Prepare the SQL command to create the table
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS " + tableName + " (" + tableDefinition + ")";

    // Execute the SQL command to create the table
    if (!query.exec(createTableQuery)) {
        // Error handling
        qDebug() << "Error: Failed to create table" << tableName << ":" << query.lastError().text();
        return false;
    }

    qDebug() << "Table" << tableName << "created successfully";
    return true;
}

int DatabaseManager::checkDatabase(QString& dbName, QSqlDatabase& db, QString dbConnection) {

    QFileInfo dbFile(dbName);
    //Check if the database file exits
    if (!dbFile.exists() || !dbFile.isFile()) {
        qDebug() << "Database file" << dbName << "not found";
        return DatabaseNotFound;
    }
    qDebug() << "Database file" << dbName << "is found";

    // Create a connection to the already existing database
    createDatabaseConnection(dbName, db, dbConnection);
    if (!db.isValid()) {
        qDebug() << "Error: Invalid database connection for" << dbName;
        return false;
    }
    openDatabase(db);

    // Check if the database is empty
    QSqlQuery query(db);
    if (query.exec("SELECT COUNT(*) FROM sqlite_master") && query.next()) {
        int tableCount = query.value(0).toInt();
        if (tableCount == 0) {
            qDebug() << "Database is empty";
            return DatabaseEmpty;
        } else {
            qDebug() << "Database is not empty";
            return DatabaseNotEmpty;
        }
    } else {
        qDebug() << "Failed to query database" << dbName << ":" << query.lastError().text();
    }
    return DatabaseNotFound;
}

bool DatabaseManager::retrievePlayerData(QString& dbName, QSqlDatabase& db, QString& tablename, playerlinkedlist& playerList) {
    //Not used dummy pointer to player
    playerlinkedlist::player* currentNodeToBeRetrieved = nullptr;
    while (!playerList.empty()) {
        playerList.pop_front();
    }
    qDebug() << "Linked list has been emptied.";
    // Ensure the database name is not empty
    if (dbName.isEmpty()) {
        qDebug() << "Invalid database name.";
        return false;
    }
    openDatabase(db);

    // Prepare the SQL query to retrieve player data
    QString queryString = "SELECT username, password FROM " + tablename;
    QSqlQuery query(db);
    if (!query.prepare(queryString)) {
        qDebug() << "Failed to prepare query:" << query.lastError().text();
        closeDatabase(db);
        return false;
    }

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        closeDatabase(db);
        return false;
    }

    // Fetch data from the query result
    while (query.next()) {
        QString username = query.value(0).toString();
        QString password = query.value(1).toString();
        playerList.push_back(username, password, &currentNodeToBeRetrieved);
    }
    qDebug() << "Retrieving happened successfully";
    return true;
}

bool DatabaseManager::updatePlayerData(QSqlDatabase& db, const QString& tableName, const QString& oldUsername, const QString& oldPassword, const QString& newUsername, const QString& newPassword) {
    // Check if the database connection is valid and open
    if (!db.isValid() || !db.isOpen()) {
        qDebug() << "Error: Database is not open or is invalid";
        return false;
    }

    // Create a QSqlQuery object for executing SQL commands
    QSqlQuery query(db);

    // Prepare the SQL command to update the player's username and password
    QString updateQuery = "UPDATE " + tableName + " SET username = :newUsername, password = :newPassword WHERE username = :oldUsername AND password = :oldPassword";
    query.prepare(updateQuery);

    // Bind the values to the placeholders
    query.bindValue(":newUsername", newUsername);
    query.bindValue(":newPassword", newPassword);
    query.bindValue(":oldUsername", oldUsername);
    query.bindValue(":oldPassword", oldPassword);

    // Execute the SQL command to update the data
    if (!query.exec()) {
        // Error handling
        qDebug() << "Error: Failed to update player data for" << oldUsername << ":" << query.lastError().text();
        return false;
    }

    // Check if any row was affected (meaning the update was successful)
    if (query.numRowsAffected() == 0) {
        qDebug() << "Error: No matching record found to update";
        return false;
    }

    qDebug() << "Player data for" << oldUsername << "updated successfully to" << newUsername;
    return true;
}


