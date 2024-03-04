# Add your library
add_library(blobLib blobDetection.cpp)

# Set include directories, if necessary

# Link with external libraries, e.g., OpenCV
# find_package(OpenCV REQUIRED)
# target_link_libraries(blobLib
#     PUBLIC ${OpenCV_LIBS}
# )

if(WIN32)
# Windows-specific settings or commands
    message("Configuring OpenCV for Windows")
    set(OpenCV_DIR "C:/Users/shubs/OneDrive/Documents/opencv/build")
    include_directories(${OpenCV_DIR}/include)
elseif(UNIX AND NOT APPLE)
    message("Configuring OpenCV  for Linux")
    find_package(OpenCV REQUIRED)
else()    
    message(FATAL_ERROR "Configuring Not supported")
endif()

target_include_directories(blobLib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(blobLib PUBLIC ${OpenCV_LIBS} )
