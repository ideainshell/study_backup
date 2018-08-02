CMAKE_MINIMUM_REQUIRED(VERSION 2.8.3)
PROJECT(sotest)

##################################################
# make configure
##################################################
set(CMAKE_BUILD_TYPE "Release")

if( CMAKE_BUILD_TYPE STREQUAL "Debug" )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -Wno-unused-variable -pthread")
else( CMAKE_BUILD_TYPE STREQUAL "Debug" )
        set(CMAKE_BUILD_TYPE "Release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3 -pthread -fopenmp")
endif( CMAKE_BUILD_TYPE STREQUAL "Debug" )

message("Build Type:" ${CMAKE_BUILD_TYPE} ${CMAKE_CXX_FLAGS})

#head file
include_directories(. ${PROJECT_SOURCE_DIR}
)

add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCE_DIR}/testone.cpp)

target_link_libraries(${PROJECT_NAME}

)


