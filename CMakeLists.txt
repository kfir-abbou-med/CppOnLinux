cmake_minimum_required(VERSION 3.10)

# Project name
project(WebcamFeed)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# debug
message(STATUS "Source file location: ${CMAKE_SOURCE_DIR}/webcam_feed.cpp")

# Add the executable
add_executable(webcam_feed webcam_feed.cpp)

# Link OpenCV libraries
target_link_libraries(webcam_feed ${OpenCV_LIBS})
