cmake_minimum_required(VERSION 3.26)
project(starterpack_igloo_snowhouse)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
        igloo
        GIT_REPOSITORY https://github.com/codewars/igloo.git
        GIT_TAG        2a63f3dfb1c267e7c349caa473812b4d8e8b121c
)
FetchContent_MakeAvailable(igloo)

add_executable(codewars codewars.cpp)
target_link_libraries(codewars PRIVATE igloo)
