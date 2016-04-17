#include "Classes.h"
#include <cstring>
#include <iostream>
Employee::Employee(char* nme) {
	name = new char[strlen(nme) + 1];
	strcpy(name, nme);
}
int Employee::set_name(char* nme)
{
	delete[]name;
	name = new char[strlen(nme) + 1];
	strcpy(name, nme);
	return 0;
}
char* Employee::get_name()const { return name; }
Employee::Employee(const Employee &a)
{
	delete[] name;
	name = new char[strlen(a.name) + 1];
	strcpy(name, a.name);
}
Employee::~Employee() { delete[] name; }
Employee& Employee::operator=(const Employee&b) 
{
	if (name != b.name)
	{
		delete[] name;
		name = new char[strlen(b.name) + 1];
		strcpy(name, b.name);
	}
	return *this;
}


Programmer::Programmer(char* nme, double s) :Employee(nme), salary(s)
{

}
int Programmer::set_salary(double s) 
{
	salary = s;
	return 0;
}
double Programmer::get_salary()const 
{
	return salary;
}
Programmer::Programmer(const Programmer&a) 
{ 
	delete[] name;
	name = new char[strlen(a.name) + 1];
	strcpy(name, a.name);

	salary = a.salary;
}
Programmer::~Programmer() 
{
	
}
Programmer& Programmer::operator=(const Programmer&b) 
{
	if (name != b.name)
	{
		delete[] name;
		name = new char[strlen(b.name) + 1];
		strcpy(name, b.name);
	}
	salary = b.salary;
	return *this;
}
std::ostream& operator<< (std::ostream& out, Programmer&a)
{
	out << "Name: " << a.get_name() << " Salary: " << a.get_salary() << std::endl;
	return out;
}
std::ostream& operator<< (std::ostream& out, Employee& a)
{
	out << "Name: " << a.get_name() << std::endl;
	return out;
}