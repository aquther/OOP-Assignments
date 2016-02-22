#include <iostream>
#include "Point.h"
using namespace std;


int main()
{
	int n;
	cout << "Enter amount of points that you want : ";
	cin >> n;
	cout << endl;
	Point *arr = new Point[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter information for point #" << i + 1 << endl;
		arr[i].Read();
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << "information about point #" << i + 1 << endl;
		arr[i].Print();
	}
	delete[]arr;


    return 0;
}

