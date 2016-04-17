#include <iostream>
#include "Classes.h"
using namespace std;

int main()
{
	Employee a;
	Programmer b;
	cout << a << b;
	a = b;
	cout << a;
	return 0;
}