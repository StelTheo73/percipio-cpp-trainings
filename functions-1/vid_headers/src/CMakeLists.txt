cmake_minimum_required(VERSION 3.22.1)
project(vid_headers)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the source files
set(SOURCES
    main.cpp
    lib/overloading/function_overloading.cpp
)

# Set the include directories
# TODO (steltheo73)

# Compile Options
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # additional warnings
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# Create the executable
add_executable(vid_headers ${SOURCES})
