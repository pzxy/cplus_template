cmake_minimum_required(VERSION 3.20)

#set(CMAKE_TOOLCHAIN_FILE "/root/workspace/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

# 确保优先使用vcpkg的包
set(CMAKE_FIND_PACKAGE_PREFER_CONFIG TRUE)

project(
    CppTemplate
    VERSION 0.1.0
    DESCRIPTION "C++ based template"
    LANGUAGES CXX C
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if ("${CMAKE_C_COMPILER_ID}" MATCHES "GNU" OR "${CMAKE_C_COMPILER_ID}" MATCHES "Clang")
    add_compile_options(
        -Wall
        -Wextra
        -fstack-protector-strong
        -g
    )
endif()

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU" OR "${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
    add_compile_options(
        -fexceptions
        -pthread
    )
    if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
        add_compile_options(-fcoroutines-ts)
    elseif ("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU")
        add_compile_options(-fcoroutines)
        # add_compile_definitions($<$<CONFIG:Debug>:_GLIBCXX_DEBUG>) # 不要放开有的lib没有用这个参数，会导致运行失败的
    endif()
endif()


if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_options(
        -ffunction-sections
        -fdata-sections
    )
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

include_directories(
    include
    src/examples
)
find_package(spdlog REQUIRED)
# find_package(FFmpeg REQUIRED)
# find_package(async_simple CONFIG REQUIRED)  # async_simple::async_simple_static
# find_package(yalantinglibs CONFIG REQUIRED) # yalantinglibs::yalantinglibs

add_subdirectory(src)
add_subdirectory(third_party)

option(WITH_TESTS "Enable testing support" ON)
if (WITH_TESTS)
    # 查找系统安装的 GTest
    find_package(GTest REQUIRED)
    enable_testing()
    add_subdirectory(tests)
    include_directories(tests)
endif()
