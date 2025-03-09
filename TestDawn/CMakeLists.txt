cmake_minimum_required(VERSION 3.13)

project(hello_webgpu)

find_package(Dawn REQUIRED)
add_executable(hello_webgpu hello_webgpu.cpp)

# Declare dependency on the dawn::webgpu_dawn library
target_link_libraries(hello_webgpu dawn::webgpu_dawn)