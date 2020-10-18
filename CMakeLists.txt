cmake_minimum_required (VERSION 3.16)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(MyProject LANGUAGES CXX VERSION 1.0.0)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake)

if(UNIX)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
endif()

add_subdirectory(core)
add_subdirectory(app)
