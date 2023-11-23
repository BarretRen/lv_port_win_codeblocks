cmake_minimum_required(VERSION 3.14)

file(GLOB_RECURSE MY_SOURCES ${CMAKE_SOURCE_DIR}/my_examples/*.c)

add_library(my_examples STATIC ${MY_SOURCES})
target_link_libraries(my_examples PUBLIC lvgl)

target_include_directories(my_examples SYSTEM 
                            PUBLIC ${CMAKE_SOURCE_DIR}/my_examples
                            PUBLIC ${CMAKE_SOURCE_DIR}/my_examples/common
                            PUBLIC ${CMAKE_SOURCE_DIR}/lvgl)

