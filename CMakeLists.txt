cmake_minimum_required(VERSION 3.12)
project(datastructure_cpp_basic)

set(CMAKE_CXX_STANDARD 14)

add_executable(datastructure_cpp_basic
        bab1_firstimpression/InputOutput.cpp bab1_firstimpression/Kondisi.cpp bab1_firstimpression/Perulangan.cpp bab1_firstimpression/Fungsi.cpp bab1_firstimpression/Array.cpp
        bab2_singlelist/mainSinglelist.cpp bab2_singlelist/singlelist.cpp bab2_singlelist/singlelist.h
        bab3_doublelinkedlist/bonus.cpp bab3_doublelinkedlist/bonus.h bab3_doublelinkedlist/doublelist.cpp bab3_doublelinkedlist/doublelist.h bab3_doublelinkedlist/mainDoublelist.cpp
        bab4_circularlist/bonus.cpp bab4_circularlist/bonus.h bab4_circularlist/circularlist.cpp bab4_circularlist/circularlist.h bab4_circularlist/main_circularlist.cpp)