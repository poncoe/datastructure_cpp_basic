cmake_minimum_required(VERSION 3.12)
project(datastructure_cpp_basic)

set(CMAKE_CXX_STANDARD 14)

add_executable(datastructure_cpp_basic
        firstimpression/InputOutput.cpp firstimpression/Kondisi.cpp firstimpression/Perulangan.cpp firstimpression/Fungsi.cpp firstimpression/Array.cpp
        bab2_singlelist/mainSinglelist.cpp bab2_singlelist/singlelist.cpp bab2_singlelist/singlelist.h
        bab3_doublelinkedlist/bonus.cpp bab3_doublelinkedlist/bonus.h bab3_doublelinkedlist/doublelist.cpp bab3_doublelinkedlist/doublelist.h bab3_doublelinkedlist/mainDoublelist.cpp)