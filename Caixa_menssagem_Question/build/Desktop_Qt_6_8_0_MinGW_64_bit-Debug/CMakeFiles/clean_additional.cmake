# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Caixa_menssagem_Question_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Caixa_menssagem_Question_autogen.dir\\ParseCache.txt"
  "Caixa_menssagem_Question_autogen"
  )
endif()
