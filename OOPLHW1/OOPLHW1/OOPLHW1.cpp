#include <iostream>
#include "Point.h"
using namespace std;


int main()
{
	int n;
	cout << "Enter amount of points(objects) that you want : ";
	cin >> n;
	cout << endl;
	Point *arr = new Point[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter information for point #" << i + 1 << endl;
		arr[i].Read();
	}
	
	cout << "----------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "information about point #" << i + 1 << endl;
		arr[i].Print();
	}
	cout << "----------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "information about point #" << i + 1 << " after initial scaling (-2|0.5|5) : " << endl;
		arr[i].ScaleABC();
		arr[i].Print();
	}
	cout << "----------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "information about point #" << i + 1 << " after vector scaling : " << endl;
		
		arr[i].Print();
	}
	delete[]arr;


    return 0;
}

