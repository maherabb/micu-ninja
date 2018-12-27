cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(observer_binding)

add_executable(${PROJECT_NAME}
	Observer.cpp
    Subscriber.cpp
    VideoChannel.cpp
    main.cpp
)
