cmake_minimum_required(VERSION 3.27)

project(Limit_order_book)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(
    Limit_order_book
    src/main.cpp
    src/MatchEngine.cpp
    
)

target_include_directories(
    Limit_order_book
    PRIVATE
    include
)