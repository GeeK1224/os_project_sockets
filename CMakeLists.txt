# CMakeLists.txt for os_project_sockets

cmake_minimum_required(VERSION 3.10)
project(os_project_sockets)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)

# Include directories for dependencies
include_directories(dependencies)

# Add source files to the project
add_executable(os_project_sockets
    main.cpp
    src/socket.cpp
    src/utils.cpp
    # Add more source files as needed
)

# Link libraries if there are any
# target_link_libraries(os_project_sockets
#     some_library
# )

# Optionally, set compiler flags
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

# Optionally, set output directories
# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
# set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
