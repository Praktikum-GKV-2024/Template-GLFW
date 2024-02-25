cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/../)

# Add include directories
include_directories(include)

# Add source files
# Jika anda menambah file source, silahkan update variable ini
set(SOURCES
    src/main.cpp
)

# Compile source files
add_executable(main ${SOURCES})

# Link the executable with necessary libraries
# Windows
IF(WIN32) 
    target_link_libraries(main
        ${CMAKE_SOURCE_DIR}/lib/libglfw3.a
        ${CMAKE_SOURCE_DIR}/lib/glew32s.lib
        glu32
        opengl32
        winmm
        gdi32
    )
ELSE()
    target_link_libraries(main
        GL
        GLU
        glfw
        GLEW
        m
        Xrandr
        Xi
        X11
        Xxf86vm
        pthread
    )
ENDIF()

ADD_DEFINITIONS(-DGLEW_STATIC)