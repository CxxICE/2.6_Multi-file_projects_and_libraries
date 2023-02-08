#include <clocale>
#include <cstdlib>

#include "Figure.h"
#include "Triangle.h"
#include "TriangleRight.h"
#include "TriangleEquilateral.h"
#include "TriangleIsosceles.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rombus.h"

void print_info(Figure *f)
{
	f->printParam();
}	

int main()
{
	setlocale(LC_ALL, "RU");
	Triangle			triangle(10,20,30,50,60,70);
	TriangleRight		triangleRight(10,20,30,50,60);
	TriangleIsosceles	triangleIsosceles(10,20,50,60);
	TriangleEquilateral triangleEquilateral(30);
	Quadrilateral		quadrilateral(10,20,30,40,50,60,70,80);
	Rectangle			rectangle(10,20);
	Square				square(20);
	Parallelogram		parallelogram(20,30,30,40);
	Rombus				rombus(30,30,40);

	print_info(&triangle);
	print_info(&triangleRight);
	print_info(&triangleIsosceles);
	print_info(&triangleEquilateral);
	print_info(&quadrilateral);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rombus);

	system("pause");
}