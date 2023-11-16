cmake_minimum_required(VERSION 3.14)

project(MyProject LANGUAGES C CXX)

# Specify path to own LVGL config header
set(LV_CONF_PATH
    ${CMAKE_SOURCE_DIR}/lv_conf.h
    CACHE STRING "" FORCE)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -DLV_CONF_INCLUDE_SIMPLE=1 -DWINVER=0x0601")
set(CMAKE_EXE_LINKER_FLAGS "-mwindows -mconsole")

add_subdirectory(lvgl)

include_directories(
        ${CMAKE_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/lvgl
)

set(SRCS
    main.c
    lv_drivers/win32drv/win32drv.c
)

# Build an executable called "LittleGL"
add_executable(LittleGL ${SRCS})

# The target "LittleGL" depends on LVGL
target_link_libraries(LittleGL PRIVATE lvgl::lvgl lvgl::examples lvgl_demos)