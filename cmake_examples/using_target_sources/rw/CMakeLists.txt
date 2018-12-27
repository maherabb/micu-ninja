if(NOT ${TARGET_SOURCES})
######################
# Using set variables
######################

set(COMMON_SOURCES InputReader.cpp OutputWriter.cpp)
set(SOURCES ${COMMON_SOURCES} FileReader.cpp FileWriter.cpp)
set(WINDOWS_SOURCES ${COMMON_SOURCES} WindowsFileReader.cpp WindowsFileWriter.cpp)
set(MAC_SOURCES ${COMMON_SOURCES} MacFileReader.cpp MacFileWriter.cpp)

if (${WINDOWS})
    add_library(${PROJECT_NAME}-librw OBJECT ${WINDOWS_SOURCES})
elseif(${MAC})
    add_library(${PROJECT_NAME}-librw OBJECT ${MAC_SOURCES})
else()
    add_library(${PROJECT_NAME}-librw OBJECT ${SOURCES})
endif()

else()
######################
# Using target_sources
######################

add_library(${PROJECT_NAME}-librw OBJECT InputReader.cpp OutputWriter.cpp)

if(${WINDOWS})
    target_sources(${PROJECT_NAME}-librw PUBLIC WindowsFileReader.cpp WindowsFileWriter.cpp)
elseif(${MAC})
    target_sources(${PROJECT_NAME}-librw PUBLIC MacFileReader.cpp MacFileWriter.cpp)
else()
    target_sources(${PROJECT_NAME}-librw PUBLIC FileReader.cpp FileWriter.cpp)
endif()

endif()
