#ifndef _RECTANGLE_H
#define _RECTANGEL_H

#include <iostream>

class Rectangle
{
private:
	double a;
	double b;
public:
	Rectangle(double = 1, double = 1);//default values shouldn't be 0!
	Rectangle(Rectangle&);
	int Set_a(double);
	int Set_b(double);
	double Get_a();
	double Get_b();

	Rectangle operator+(int);
	Rectangle operator*(int);

	friend std::ostream& operator<<(std::ostream&,const Rectangle&);

};

#endif