cmake_minimum_required(VERSION 3.24)
project(task2)

set(CMAKE_CXX_STANDARD 17)

add_executable(task2 main.cpp Menu.cpp Menu.h CashRegister.cpp CashRegister.h DispenserType.cpp DispenserType.h VendingMachine.cpp VendingMachine.h StackNode.cpp StackNode.h Stack.cpp Stack.h)
