# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TIC_TAC_TOE_GUI_Sign_Up_Window_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TIC_TAC_TOE_GUI_Sign_Up_Window_autogen.dir\\ParseCache.txt"
  "TIC_TAC_TOE_GUI_Sign_Up_Window_autogen"
  )
endif()
