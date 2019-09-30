cmake_minimum_required (VERSION 2.6)

project(minecraft-symbols LANGUAGES CXX)

set(MINECRAFT_SYMBOLS_SOURCES src/symbols.cpp src/symbols_dlsym.cpp)

if (APPLE)
    set(MINECRAFT_SYMBOLS_SOURCES ${MINECRAFT_SYMBOLS_SOURCES} include/minecraft/std/string_darwin.cpp)
else()
    set(MINECRAFT_SYMBOLS_SOURCES ${MINECRAFT_SYMBOLS_SOURCES} include/minecraft/std/string_linux.cpp)
endif()

add_library(minecraft-symbols ${MINECRAFT_SYMBOLS_SOURCES})
target_include_directories(minecraft-symbols PUBLIC include/)
target_link_libraries(minecraft-symbols logger hybris)