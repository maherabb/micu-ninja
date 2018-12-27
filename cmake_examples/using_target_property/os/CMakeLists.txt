add_library(${PROJECT_NAME}-os OBJECT
    NinDroid.cpp
)

target_include_directories(${PROJECT_NAME}-os PRIVATE
    ${PROJECT_SOURCE_DIR}/hw
    ${PROJECT_SOURCE_DIR}/ext-hw
	${PROJECT_SOURCE_DIR}/3rd-party
)
