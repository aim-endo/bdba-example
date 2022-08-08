cmake_minimum_required(VERSION 3.5)

project(bdba-example2 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(CUDA REQUIRED)
find_package(Torch REQUIRED)

file(GLOB_RECURSE PROJECT_SOURCES
    ${PROJECT_SOURCE_DIR}/main.cpp
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)

set(PROJECT_SYSTEM_INCLUDES
    ${CUDA_INCLUDE_DIRS}
    ${TORCH_INCLUDE_DIRS}
)

set(PROJECT_INCLUDES
    ${PROJECT_SOURCE_DIR}/src
)

set(PROJECT_LIBRARIES
    ${CUDA_LIBRARIES}
    ${TORCH_LIBRARIES}
    Threads::Threads
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
include_directories(${PROJECT_NAME} SYSTEM ${PROJECT_SYSTEM_INCLUDES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${CONAN_LIBS} ${PROJECT_LIBRARIES})

