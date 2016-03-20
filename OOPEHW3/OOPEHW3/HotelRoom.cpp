#include "HotelRoom.h"
#include <iostream>
Hotelroom::Hotelroom() { price = NULL; identNum = NULL; sz = 0; }
Hotelroom::Hotelroom(int*ind, double*pr,int sz):sz(sz)
{
	std::cout << "The size const is saying : " << sz << std::endl;
	identNum = new int[sz];
	price = new double[sz];
	for (int i = 0; i < sz; i++)
	{
		identNum[i] = ind[i];
		price[i] = pr[i];
	}
}

Hotelroom::Hotelroom(const Hotelroom&a)
{
	delete[]identNum;
	delete[]price;
	identNum = new int[sz];
	price = new double[sz];

	for (int i = 0; i < sz; i++)
	{
		identNum[i] = a.identNum[i];
		price[i] = a.price[i];
	}
}

int Hotelroom::Set_ident(int*a, int sz)
{
	this->sz = sz;
	delete[]identNum;
	identNum = new int[sz];
	for (int i = 0; i < sz; i++)
	{
		identNum[i] = a[i];
	}

	return 0;
}
int* Hotelroom::Get_ident()const 
{
	return identNum;
}
int Hotelroom::Set_price(double*a, int sz)
{
	this->sz = sz;

	delete[]price;
	price = new double[sz];
	for (int i = 0; i < sz; i++)
	{
		price[i] = a[i];
	}
	return 0;

}
double* Hotelroom::Get_price()const
{
	return price;
}
int Hotelroom::Set_size(int sz)
{ 
	this->sz = sz;
	return 0; }
int Hotelroom::Get_size()const { return sz; }

int Hotelroom::addRoom(int iNomer, int cena)
{
	int *tmpI=new int[sz];
	double *tmpP=new double[sz];
	for (int i = 0; i < sz; i++)
	{
		tmpI[i] = identNum[i];
		tmpP[i] = price[i];
	}

	delete[]identNum;
	delete[]price;

	sz++;
	identNum = new int[sz];
	price = new double[sz];

	for (int i = 0; i < sz - 1; i++)
	{
		identNum[i] = tmpI[i];
		price[i] = tmpP[i];
	}
	identNum[sz-1] = iNomer;
	price[sz-1] = cena;

	delete[]tmpI;
	delete[]tmpP;

	return 0;

}

double Hotelroom::highestRoom()
{
	double maxPrice=price[0];
	for (int i = 1; i < sz; i++)
	{
		if (maxPrice < price[i])maxPrice = price[i];
	}
	return maxPrice;
}
Hotelroom::~Hotelroom()
{
	delete[]identNum;
	delete[]price;
}

Hotelroom& Hotelroom::operator=(const Hotelroom&a)
{
	if (this != &a)
	{
		delete[]identNum;
		delete[]price;
		sz = a.sz;

		identNum = new int[sz];
		price = new double[sz];
		for (int i = 0; i < sz; i++)
		{
			identNum[i] = a.identNum[i];
			price[i] = a.price[i];
		}
	}
	return *this;
}

int Hotelroom::print()
{
	for (int i = 0; i < sz; i++)
	{
		std::cout << "Identity number " << identNum[i] << " for price " << price[i] << " leva.\n";
	}
	return 0;
}

double FindMaxPrice(const Hotelroom&a)
{
	double maxPrice = 0;
	double *priceArray = a.Get_price();
	for (int i = 0; i < a.Get_size(); i++)
	{
		a.Get_price()[i];
		if (maxPrice < a.Get_price()[i])maxPrice = priceArray[i];
	}
	return maxPrice;
}