if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
endif()
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

cmake_minimum_required(VERSION 3.14)

project(mmultiopti_sample)

add_subdirectory(Lib)

add_executable(mmultiopti_sample
    mmultiopti_sample.cpp
    )

# "Lib/mMultiOpti" ライブラリをリンク
target_link_libraries(mmultiopti_sample PRIVATE mMultiOpti)