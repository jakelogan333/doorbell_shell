cmake_minimum_required(VERSION 3.12)

project(dorbell_shell)

# build libpcap
add_subdirectory(deps)

set(EXE_NAME doorbell)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(${EXE_NAME} ${SRC_FILES})

target_include_directories(${EXE_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/deps/libpcap)
target_link_libraries(${EXE_NAME} pcap)
set_target_properties(${EXE_NAME} PROPERTIES LINK_FLAGS "/DELAYLOAD:pcap.dll")