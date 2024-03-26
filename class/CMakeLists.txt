cmake_minimum_required(VERSION 3.28.1)
project(ptr)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 23)

aux_source_directory(./src SrcFiles)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(main ${SrcFiles})