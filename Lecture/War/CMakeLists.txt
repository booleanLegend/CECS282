cmake_minimum_required(VERSION 3.19)
project(War)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(War
        Card.cpp
        Card.h
        CardPile.cpp
        CardPile.h
        Deck.cpp
        Deck.h
        LostAndFound.cpp
        LostAndFound.h
        main.cpp
        MegaDeck.cpp
        MegaDeck.h
        Player.cpp
        Player.h
        WarPile.cpp
        WarPile.h)
