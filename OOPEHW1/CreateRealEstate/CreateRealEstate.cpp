#include <iostream>
#include "Estate.h"
using namespace std;

int main()
{
	int n;
	cout << "Enter amount of objects : ";
	cin >> n;
	Estate *sss = new Estate[n];
	for (int i = 0; i < n; i++)
	{
		sss[i].Read();
		cout << endl;
	}
	cout << "-----------------------------------------------------------" << endl;
	cout << "Information about the objects : " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Object #" << i + 1 << " : " << endl;
		sss[i].Print();
		cout << endl;
	}
	
	double max = 0;
	int mindex;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
			if (sss[i].CalcPrice() > max)
			{
				max = sss[i].CalcPrice();
				mindex = i;
				
			}
		sum = sum + sss[i].CalcPrice();
	}
	//compare only if object are more than 1
	//if MaxIndex has not moved from the first object that means that it either has the biggest price or all objects are equal.
	//Check to see if object 0 has the same price as object 1. If yes -> all object have equal price. Else -> object 0 has the biggest price.
	
	if ((n > 1) && (mindex == 0) && (sss[0].CalcPrice() == sss[1].CalcPrice())) cout << "All objects have equal prices : " << sss[0].CalcPrice() << ". The sum of all prices is " << sum << endl;
	else cout << endl << "Object number : " << mindex + 1 << " has the highest price : " << max << ". The sum of all prices is " << sum << "." << endl;

	
	
	

}