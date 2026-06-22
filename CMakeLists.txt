cmake_minimum_required(VERSION 3.26)
project(a-tour-of-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE ALL_SOURCES ${CMAKE_SOURCE_DIR}/src/**/*.cpp)

foreach (src ${ALL_SOURCES})
    file(RELATIVE_PATH rel_path ${CMAKE_SOURCE_DIR}/src ${src})

    string(REPLACE "/" "_" target_name ${rel_path})
    string(REPLACE ".cpp" "" target_name ${target_name})

    add_executable(${target_name} ${src})
endforeach ()