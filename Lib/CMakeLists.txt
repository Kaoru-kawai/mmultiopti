cmake_minimum_required(VERSION 3.14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(mMultiOpti)

# ライブラリの作成
add_library(mMultiOpti 
mMultiOpti.cpp)