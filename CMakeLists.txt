cmake_minimum_required(VERSION 3.10) 

project(MySFMLProject CXX)

find_package(SFML REQUIRED Graphics Window System)

add_executable(my_sfml_app 
main.cpp
src/menu.cpp
)

target_link_libraries(my_sfml_app SFML::Graphics SFML::Window SFML::System)
