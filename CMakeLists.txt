cmake_minimum_required(VERSION 3.5)

project(DSLib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DSLib main.cpp
    include/trie.hxx
    include/ds_concepts.hxx)

include(GNUInstallDirs)
install(TARGETS DSLib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
