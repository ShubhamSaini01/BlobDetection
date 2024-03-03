cmake_minimum_required(VERSION 3.14)
project(blob_detection)
set(CMAKE_CXX_STANDARD 17)
# Set the path to OpenCV libraries
# set(OpenCV_DIR /mnt/d/CppDev/opencv/)
# Set the include directories for OpenCV
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include)
message(${PROJECT_SOURCE_DIR}/include/)
file(GLOB sources  ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/include/*.h)
add_executable(blob_detection ${sources} )
target_link_libraries(blob_detection ${OpenCV_LIBS} )