#include "Point.h"
#include <iostream>

Point::Point() {}
Point::Point(double a, double b, double c) :x(a), y(b), z(c) {}

void Point::Read()
{
	std::cout << "Enter X axis : ";
	std::cin >> x;
	
	std::cout << "Enter Y axis : ";
	std::cin >> y;

	std::cout << "Enter Z axis : ";
	std::cin >> z;
	std::cout << std::endl;
}
void Point::Print()
{
	std::cout << "The X axis is : " << x << std::endl;
	std::cout << "The Y axis is : " << y << std::endl;
	std::cout << "The Z axis is : " << z << std::endl;
}
void Point::SetX(double a)
{
	x = a;
}
void Point::SetY(double b)
{
	y = b;
}
void Point::SetZ(double c) 
{
	z = c;
}
double Point::GetX() 
{
	return x;
}
double Point::GetY() 
{
	return y;
}
double Point::GetZ() 
{
	return z;
}