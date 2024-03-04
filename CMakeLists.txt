cmake_minimum_required(VERSION 3.14)
project(blob_detection)
if(WIN32)
# Windows-specific settings or commands
    message("Inititing blob detection project for Windows")
elseif(UNIX AND NOT APPLE)
    message("Inititing blob detection project for Linux")
else()
    message(FATAL_ERROR "Configuring Not supported")
endif()


set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(utils)
add_subdirectory(blob)

