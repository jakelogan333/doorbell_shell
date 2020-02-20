cmake_minimum_required(VERSION 3.5)

project(dorbell_shell)

add_subdirectory(deps)
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(doorbell ${SRC_FILES})