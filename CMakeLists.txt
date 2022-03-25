
cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
project(dynamic_static.json)
set(CMAKE_CXX_STANDARD 20)

################################################################################
# dependencies
set(external "${CMAKE_CURRENT_LIST_DIR}/external/")
string(REPLACE "\\" "/" DYNAMIC_STATIC "$ENV{DYNAMIC_STATIC}")
include("${external}/dynamic_static.build.cmake")

################################################################################
# dynamic_static.json
set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include/")
set(includePath "${includeDirectory}/dynamic_static/json/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source/dynamic_static/json/")
dst_add_static_library(
    target
        dynamic_static.json
    includeDirectories
        "${includeDirectory}"
    includeFiles
        "${includePath}/placeholder.hpp"
    sourceFiles
        "${sourcePath}/placeholder.cpp"
)

################################################################################
# dynamic_static.json.test
dst_add_target_test(
    target dynamic_static.json
    sourceFiles "${CMAKE_CURRENT_LIST_DIR}/tests/json.tests.cpp"
)
