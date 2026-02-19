cmake_minimum_required(VERSION 3.10)

project(SocketFramework VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(libflash_sources
    src/flash.cpp
)

add_library(flash SHARED ${libflash_sources})

target_include_directories(flash 
    PUBLIC 
        include
    PRIVATE
        src
)

target_compile_options(flash PRIVATE -Wall -Wextra -Wpedantic)

target_link_libraries(flash PRIVATE pthread)

add_executable(flash_test_app src/main.cpp)

target_link_libraries(flash_test_app PRIVATE flash)

target_link_libraries(flash_test_app PRIVATE pthread)

target_include_directories(flash_test_app PRIVATE include)

target_compile_options(flash_test_app PRIVATE -Wall -Wextra -Wpedantic)
