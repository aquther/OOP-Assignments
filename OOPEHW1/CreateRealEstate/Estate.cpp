#include "Estate.h"
#include <cstring>
#include <iostream>
Estate::Estate() 
{
	name = new char[2];
	name = " ";
	address= new char[2];
	address = " ";

	double kvadratura;
	double cenaKv;
}
Estate::Estate(char*n, char*a, double k, double c):kvadratura(k), cenaKv(c)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);

	address = new char[strlen(a) + 1];
	strcpy(address, a);
}

int Estate::Read()
{
	name = new char[100];
	address = new char[100];
	
	std::cout << "Enter name: ";
	std::cin.ignore();
	std::cin.getline(name, 99);
	
	
	std::cout << "Enter address: ";
	std::cin.getline(address, 99);
	
	std::cout << "Enter size (in kv.m): ";
	std::cin >> kvadratura;
	std::cout << "Enter price per kv/m: ";
	std::cin >> cenaKv;
	return 0;
}
int Estate::Print()const
{
	std::cout << "Name : " << name << std::endl;
	std::cout << "Address : " << address << std::endl;
	std::cout << "Size : " << kvadratura << std::endl;
	std::cout << "Price per kv/m : " << cenaKv << std::endl;
	
	return 0;
}
int Estate::SetName(char*n)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);

	return 0;
}
int Estate::SetAddres(char* a)
{
	address = new char[strlen(a) + 1];
	strcpy(address, a);
	
	return 0;
}
int Estate::SetKvadratura(double k)
{
	kvadratura = k;

	return 0;
}
int Estate::SetcenaKv(double c)
{
	cenaKv = c;

	return 0;
}

char* Estate::GetName()const 
{
	return name;
}
char* Estate::GetAddress()const 
{
	return address;
}
double Estate::Getkvadratura()const 
{
	return kvadratura;
}
double Estate::GetcenaKv()const 
{
	return cenaKv;
}

double Estate::CalcPrice()
{
	return kvadratura*cenaKv;
}
Estate::~Estate()
{
	delete[]name;
	delete[]address;
}