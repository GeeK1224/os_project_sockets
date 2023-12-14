cmake_minimum_required(VERSION 3.15)
project(os_project)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(INCLUDE_PATHS include/boost_1_83_0 include/crow/include include/odb/)

# Add your source files
set(SOURCE_FILES
    src/server.cpp)

# Create the executable
add_executable(server ${SOURCE_FILES})

# Add additional include directories if needed
target_include_directories(server PUBLIC ${INCLUDE_PATHS})