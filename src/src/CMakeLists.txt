cmake_minimum_required(VERSION 3.15)
project(hotel)

set(CMAKE_CXX_STANDARD 14)

add_executable(hotel main.cpp menu.cpp menu.h createAccount.cpp createAccount.h LoginScreen.cpp LoginScreen.h Navigation.cpp Navigation.h)