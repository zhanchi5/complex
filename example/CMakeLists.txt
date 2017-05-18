cmake_minimum_required(VERSION 2.8)

project (complex)
set(SOURCES complex.cpp)
add_executable (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} complex)
