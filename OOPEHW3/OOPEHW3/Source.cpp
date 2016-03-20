#include "HotelRoom.h"
#include <iostream>
using namespace std;

int main()
{
	
	Hotelroom *a = new Hotelroom[5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4;j++)
		a[i].addRoom((i+1) * 100 + j, 70+(j+i)*(10+i)); //random formula for price calculation
		cout << "Room number " << i+1 << " :\n";
		a[i].print();
		cout << "Biggest price is : " << FindMaxPrice(a[i]) << " leva.\n";
		cout << endl;
	}
	
	

}