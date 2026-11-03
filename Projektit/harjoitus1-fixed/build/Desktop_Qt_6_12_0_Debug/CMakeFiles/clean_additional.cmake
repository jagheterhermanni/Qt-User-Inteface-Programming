# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/harjoitus1-fixed_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/harjoitus1-fixed_autogen.dir/ParseCache.txt"
  "harjoitus1-fixed_autogen"
  )
endif()
