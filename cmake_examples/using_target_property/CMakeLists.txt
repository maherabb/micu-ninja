cmake_minimum_required(VERSION 2.8)
project(phone)

add_library(${PROJECT_NAME}-main OBJECT
    main.cpp
)

add_executable(${PROJECT_NAME}
    $<TARGET_OBJECTS:${PROJECT_NAME}-main>
)

add_subdirectory(hw)
add_subdirectory(ext-hw)
add_subdirectory(os)
add_subdirectory(apps)
add_subdirectory(3rd-party)
