cmake_minimum_required (VERSION 3.8)
project ("Homework 3.11.5")
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Shapes SHARED Equilateral_triangle.h Equilateral_triangle.cpp
			  Figure.h Figure.cpp
			  Isosceles_triangle.h Isosceles_triangle.cpp
			  Parallelogram.h Parallelogram.cpp
			  Quadrangle.h Quadrangle.cpp
			  Rectangle.h Rectangle.cpp
			  Rhombus.h Rhombus.cpp
			  Right_triangle.h Right_triangle.cpp
			  Square.h Square.cpp
			  Triangle.h Triangle.cpp
			  Shapes.h)

add_executable (Homework_3_11_5 main.cpp)
target_link_libraries(Homework_3_11_5 Shapes)