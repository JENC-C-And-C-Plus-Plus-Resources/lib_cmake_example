cmake_minimum_required(VERSION 3.13)
project(mearlymath)
add_library(mearlymath someMath.cpp)
set_target_properties(mearlymath PROPERTIES PUBLIC_HEADER someMath.h)
install(TARGETS mearlymath LIBRARY DESTINATION lib
    PUBLIC_HEADER DESTINATION include
)