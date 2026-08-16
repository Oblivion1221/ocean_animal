cmake_minimum_required(VERSION 3.12)
project(ocean_animal VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Исполняемые файлы будут собираться в корне папки build
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Генерация конфигурационного файла
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/config.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/generated/config.h
)

add_subdirectory(lib)
add_subdirectory(src)
