#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle a;
	Rectangle b(4, 5);
	cout << "Object a:\n";
	cout << a;
	cout << "Object b:\n";
	cout << b;

	cout << endl;

	cout << "Object a + 2:\n";
	cout << a + 2;
	cout << "Object b * 2:\n";
	cout << b * 2;

	return 0;
}