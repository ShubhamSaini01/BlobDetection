add_library(utilsLib utils.cpp)

# Set include directories, if necessary
target_include_directories(utilsLib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

# Link with other libraries if needed
# target_link_libraries(YourUtilsLibrary
#     other_library1
#     other_library2
#     # ...
# )
