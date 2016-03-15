#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
	Money a(10, 0);
	Money b(4, 70);
	cout << "Object a : " << a;
	cout << "Object b : " << b << endl;
	cout << "Obj a - Obj b = " << a - b;
	cout << "Obj a + Obj b = " << a + b;
	cout << "n%a, n=10% : " << 10 % a;
	cout << "n%b, n=10% : " << 10 % b;

	

	

}

