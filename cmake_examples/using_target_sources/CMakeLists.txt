make_minimum_required(VERSION 3.0)
project(CMakeExamples)

option(TARGET_SOURCES "Build with target_sources" ON)
message(STATUS "Build with target_sources: ${TARGET_SOURCES}")

option(TESTING "Include test targets" ON)
message(STATUS "Include test targets: ${TESTING}")

option(WINDOWS "Build for WINDOWS OS" OFF)
message(STATUS "Build for WINDOWS OS: ${WINDOWS}")
option(MAC "Build for MAC OS" OFF)
message(STATUS "Build for MAC OS: ${MAC}")

add_subdirectory(fonts)
add_subdirectory(rw)

set(fruits "apple" "banana" "orange")
MESSAGE(${fruits}) # Typo will produce: message called with incorrect number of arguments
