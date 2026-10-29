# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appharjoitus1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appharjoitus1_autogen.dir/ParseCache.txt"
  "appharjoitus1_autogen"
  )
endif()
