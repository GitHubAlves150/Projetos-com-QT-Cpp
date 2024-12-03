# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Slot_Signal_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Slot_Signal_autogen.dir\\ParseCache.txt"
  "Slot_Signal_autogen"
  )
endif()
