cmake_minimum_required(VERSION 3.20)
project(Magazine_Jocuri_Video)

set(CMAKE_CXX_STANDARD 14)

add_executable(Magazine_Jocuri_Video
        main.cpp personaj.cpp personaj.h joc.cpp joc.h magazin.cpp magazin.h aplicatie.cpp aplicatie.h warrior.cpp warrior.h mage.cpp mage.h archer.cpp archer.h eroare_personaj.cpp eroare_personaj.h magazin_impl.cpp aplicatie_impl.cpp)
