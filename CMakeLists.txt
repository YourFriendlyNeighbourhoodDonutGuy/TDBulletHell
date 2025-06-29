cmake_minimum_required(VERSION 3.10.0)
project(TDBulletHell VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.1
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(TDBulletHell src/Main.cpp)
target_compile_features(TDBulletHell PRIVATE cxx_std_17)
target_link_libraries(TDBulletHell PRIVATE SFML::Graphics)
include(CTest)
enable_testing()

