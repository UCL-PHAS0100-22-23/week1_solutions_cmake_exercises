cmake_minimum_required(VERSION 3.16)

project(minimal_helloworld
  VERSION 0.0.1
  LANGUAGES CXX
)

add_executable(hello_world)

target_sources(hello_world PRIVATE hello.cpp)
