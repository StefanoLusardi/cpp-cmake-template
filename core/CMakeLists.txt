# Define Core project
project(core LANGUAGES CXX)

# Declare executable
add_library(${PROJECT_NAME} SHARED)

# Define project files
target_sources(${PROJECT_NAME} PRIVATE u_${PROJECT_NAME}.cpp)

# Setup precompiled headers
target_precompile_headers(${PROJECT_NAME} PRIVATE pch/${PROJECT_NAME}_pch.hpp)

target_include_directories(${PROJECT_NAME}
	SYSTEM PRIVATE include/${PROJECT_NAME}
	SYSTEM PUBLIC include
)
