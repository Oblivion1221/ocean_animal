cmake_minimum_required(VERSION 3.12)

add_executable(main_app main.cpp)

target_link_libraries(main_app PRIVATE Lib::lib)