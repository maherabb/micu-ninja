add_library(${PROJECT_NAME}-app-mp3player OBJECT
    Mp3Player.cpp
)

###########################
# Not using target_property
###########################
# target_include_directories(${PROJECT_NAME}-app-mp3player PRIVATE
#     ${PROJECT_SOURCE_DIR}/os
#     ${PROJECT_SOURCE_DIR}/hw
#     ${PROJECT_SOURCE_DIR}/ext-hw
# )

#######################
# Using target_property
#######################
target_include_directories(${PROJECT_NAME}-app-mp3player
PRIVATE
    $<TARGET_PROPERTY:${PROJECT_NAME}-os,INCLUDE_DIRECTORIES>
    ${PROJECT_SOURCE_DIR}/os
)
