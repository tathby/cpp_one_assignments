<<<<<<< HEAD
cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories (child projects)
add_subdirectory(${CMAKE_SOURCE_DIR}/algorithms)
=======
cmake_minimum_required(VERSION 3.10)
project(Assignments)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/algorithms)
add_subdirectory(${CMAKE_SOURCE_DIR}/battleship)
>>>>>>> 7dcff40e8bf12ff73921a872abd54fe043e9c661
