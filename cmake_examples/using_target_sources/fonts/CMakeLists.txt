if(NOT ${TARGET_SOURCES})
######################
# Using set variables
######################

set(BASE_SOURCES FontWriter.cpp FontFactory.cpp)
set(SOURCES ${BASE_SOURCES} FontStyle.cpp)
set(TEST_SOURCES ${BASE_SOURCES})

if(NOT ${TESTING})
    add_library(${PROJECT_NAME}-libfonts OBJECT ${SOURCES})
else()
    add_library(${PROJECT_NAME}-libfonts OBJECT ${TEST_SOURCES})
endif()

else()
######################
# Using target_sources
######################

add_library(${PROJECT_NAME}-libfonts OBJECT FontWriter.cpp FontFactory.cpp)

if(NOT ${TESTING})
    target_sources(${PROJECT_NAME}-libfonts PUBLIC FontStyle.cpp)
endif()

endif()
