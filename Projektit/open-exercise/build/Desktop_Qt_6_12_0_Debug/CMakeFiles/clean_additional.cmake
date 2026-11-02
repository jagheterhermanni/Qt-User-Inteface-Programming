# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/open-exercise_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/open-exercise_autogen.dir/ParseCache.txt"
  "open-exercise_autogen"
  )
endif()
