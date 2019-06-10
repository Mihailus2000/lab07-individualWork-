cmake_minimum_required(VERSION 3.0)

include("cmake/HunterGate.cmake")
huntergate(
  URL "https://github.com/ruslo/hunter/archive/v0.23.83.tar.gz"
  SHA1 "12dec078717539eb7b03e6d2a17797cba9be9ba9"
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(demo)

set(DEMO_VERSION_MAJOR 0)
set(DEMO_VERSION_MINOR 1)
set(DEMO_VERSION_PATCH 0)
set(DEMO_VERSION_TWEAK 0)
set(DEMO_VERSION
  ${DEMO_VERSION_MAJOR}.${DEMO_VERSION_MINOR}.${DEMO_VERSION_PATCH}.${DEMO_VERSION_TWEAK})
set(DEMO_VERSION_STRING "v${DEMO_VERSION}")



hunter_add_package(fmt)
find_package(fmt CONFIG REQUIRED)

add_executable(demo_fmt ./sources/demo.cpp)

target_link_libraries(demo_fmt PUBLIC fmt)
