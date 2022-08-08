cmake_minimum_required(VERSION 3.5)

project(bdba-example1 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Gui Widgets Concurrent REQUIRED)
find_package(CUDA REQUIRED)
find_package(Torch REQUIRED)
find_package(OpenSSL REQUIRED)

file(GLOB_RECURSE PROJECT_SOURCES
    ${PROJECT_SOURCE_DIR}/main.cpp
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)

set(PROJECT_INCLUDES
    ${PROJECT_SOURCE_DIR}/src
)

set(PROJECT_LIBRARIES
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Concurrent
    ${CUDA_LIBRARIES}
    ${TORCH_LIBRARIES}
    ${OPENSSL_LIBRARIES}
    Threads::Threads
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_LIBRARIES})

