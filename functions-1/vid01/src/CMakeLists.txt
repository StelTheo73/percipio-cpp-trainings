cmake_minimum_required(VERSION 3.22.1)
project(vid01)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the source files
set(SOURCES
    main.cpp
    lib/default_values.cpp
)

# Set the include directories
include_directories(lib)

# Compile Options
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # additional warnings
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# Create the executable
add_executable(vid01 ${SOURCES})
