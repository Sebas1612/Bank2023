cmake_minimum_required(VERSION 3.24)
project(bank)

set(CMAKE_CXX_STANDARD 20)

add_executable(bank main.cpp Client.cpp Client.h Client.h Account.cpp Account.h Account.h Bank.cpp Bank.h)
