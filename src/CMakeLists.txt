cmake_minimum_required(VERSION 3.12)

add_executable(main_app main.cpp)

# Подключаем вашу библиотеку
target_link_libraries(main_app PRIVATE Lib::lib)

# Обязательно добавляем путь к сгенерированному config.h, 
# чтобы main.cpp мог сделать #include "config.h"
target_include_directories(main_app PRIVATE 
    ${CMAKE_BINARY_DIR}/generated
)