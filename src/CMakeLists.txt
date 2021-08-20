rock_library(test_qt4
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(test_qt4_bin Main.cpp
    DEPS test_qt4)

