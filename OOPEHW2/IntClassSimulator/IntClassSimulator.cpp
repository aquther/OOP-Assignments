#include <iostream>
using namespace std;


class Int
{
	int n;
public:

	 Int(unsigned up)
	{
		cout << "Unsigned constuctor used:\n";
		n = rand() % up;
	}

	Int(int n) :n(n) 
	{
		cout << "Int constuctor used:\n";
	}

	int getN() { return n; }
	void prn()const { cout << "Num = " << n << endl; }
	Int plus1()const
	{
		return Int(n + 1);
	}
};

void Print(Int a)
{
	a.prn();
}
void PrintRef(const Int &a)
{
	a.prn();
}

void main()
{
	Int y = 55u / 2;
	cout << y.getN() << endl;


	Int z = 25u;
	cout << z.getN() << endl;
	
	z.plus1().prn();
	cout << endl;
	{
		cout << "Entering first scope...\n";
		Int a(12u);
		a.prn();
		Int b(44);
		b.prn();

		cout << "Global function #1 :\n";
		cout << "Object A :\n";
		Print(a);
		cout << "Object A + 1 :\n";
		a.plus1().prn();
		
		cout << "Global function #2 :\n";
		cout << "Object B :\n";
		PrintRef(b);//second global function (with ref)
		cout << "Object B + 1 :\n";
		b.plus1().prn(); //calling prn() function for returned object of function plus1()

		cout << "Exiting first scope...\n";

	}
	cout << endl;
	{
		cout << "Entering second scope...\n";
		Int c(20u);
		c.prn();
		Int d(78);
		d.prn();
		cout << "Exiting second scope...\n";
	}
}