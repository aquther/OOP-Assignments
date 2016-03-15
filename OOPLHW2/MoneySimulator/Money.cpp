#include "Money.h"
#include <iostream>
Money::Money(int a, int b):levove(a),stotinki(b) {}
Money::~Money(){}

int Money::SetLev(int a) 
{	
	levove = a;
	return 0;
}
int Money::SetStotinki(int a) 
{
	stotinki = a;
	return 0;
}

int Money::GetLev()const 
{
	return levove;
}
int Money::GetStotinki()const 
{
	return stotinki;
}

int Money::Read() 
{
	std::cout << "Enter amount of leva : ";
	std::cin >> levove;


	std::cout << "Enter amout of stotinki : ";
	std::cin >> stotinki;
	if (stotinki >= 100)
	{
		levove += stotinki / 100;
		stotinki = stotinki - (stotinki / 100) * 100;
		
	}
	return 0;
}
int Money::Print() 
{
	std::cout << levove << " leva and " << stotinki << " stotinki.\n";

	return 0;
}
Money Money::operator+(const Money&a)const 
{
	return Money(this->GetLev() + a.GetLev(),this->GetStotinki()+a.GetStotinki()); 
}
Money Money::operator-(const Money&a)const 
{
	int newlev;
	int newstot;
	if ((levove<a.levove)||((levove == a.levove) && (stotinki < a.stotinki)))
	{
		std::cout << "First amount is less than the second one!\n";
	}
	else if ((levove == a.levove) && (stotinki >= a.stotinki))
	{

		return Money(0, stotinki - a.stotinki);
	}
	else {
		if (stotinki<a.stotinki)
		{
			return Money(levove-a.levove-1, 100 + stotinki-a.stotinki);
		}
		else return Money(levove - a.levove, stotinki - a.stotinki);
	}
	

}
bool Money::operator>(const Money&a)const 
{ 
	if(levove!=a.GetLev())
	return levove>a.levove;
	else return stotinki > a.stotinki;
}
bool Money::operator<(const Money&a)const {
	if (levove != a.GetLev())
		return levove<a.levove;
	else return stotinki < a.stotinki;
}

std::ostream& operator<<(std::ostream&out, const Money&a)
{
	out << a.GetLev() << " leva and " << a.GetStotinki() << " stotinki. \n";
	return out;
}

Money operator%(double n, Money& a)
{
	double pari = (a.levove + a.stotinki / 100.0)*(n/100);
	
	return Money((int)pari, (pari - (int)pari)*100);
}