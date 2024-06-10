cmake_minimum_required(VERSION 3.23)

project(b7ackRender)

# Add source files
file(GLOB_RECURSE SOURCE_FILES 
    ${CMAKE_SOURCE_DIR}/src/*.c
    ${CMAKE_SOURCE_DIR}/src/*.cpp
    ${CMAKE_SOURCE_DIR}/src/thirdparty/*.c)

# Add header files
file(GLOB_RECURSE HEADER_FILES
    ${CMAKE_SOURCE_DIR}/src/*.h
    ${CMAKE_SOURCE_DIR}/src/*.hpp)

# Copy shader files to build directory
#file(COPY ${CMAKE_SOURCE_DIR}/src/shaders DESTINATION ${CMAKE_BINARY_DIR})

# Define the executable
add_executable(${PROJECT_NAME} thirdparty/glad.c ${HEADER_FILES} ${SOURCE_FILES})

# Define the include directories for your project
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE GL dl glfw)
