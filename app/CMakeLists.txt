# Define App project
project(app LANGUAGES CXX)

# Configure resource file
configure_file(res/${PROJECT_NAME}_res.hpp.in ${PROJECT_BINARY_DIR}/${PROJECT_NAME}_res.hpp)

# Declare executable
add_executable(${PROJECT_NAME})

# Define project files
target_sources(${PROJECT_NAME} PUBLIC u_${PROJECT_NAME}.cpp)

# Setup precompiled headers
target_precompile_headers(${PROJECT_NAME} PRIVATE pch/${PROJECT_NAME}_pch.hpp)

target_link_libraries(${PROJECT_NAME} 
	PRIVATE core
)