#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double a, double b) :a(a), b(b) {};

Rectangle::Rectangle(Rectangle&obj) 
{
	a = obj.a;
	b = obj.a;
}

int Rectangle::Set_a(double a) 
{
	this->a = a;

	return 0;
}
int Rectangle::Set_b(double b) 
{
	this->b = b;

	return 0;
}
double Rectangle::Get_a() { return a; }
double Rectangle::Get_b() { return b; }

Rectangle Rectangle::operator+(int c)
{
	return Rectangle(a + c, b + c);
}
Rectangle Rectangle::operator*(int c) 
{
	return Rectangle(a*c, b*c);
}

std::ostream& operator<<(std::ostream& out,const Rectangle&obj)
{
	out << "Side A: " << obj.a << " || Side B: " << obj.b << std::endl;
	return out;
}