# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ZorkProject_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ZorkProject_autogen.dir/ParseCache.txt"
  "ZorkProject_autogen"
  )
endif()
