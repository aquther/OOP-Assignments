#ifndef _MONEY_H
#define _MONEY_H
#include <iostream>
class Money {
private:
	int levove;
	int stotinki;
	friend Money operator%(double, Money&);
public:
	Money(int =0, int =0);
	~Money();

	int SetLev(int);
	int SetStotinki(int);

	int GetLev()const;
	int GetStotinki()const;

	int Read();
	int Print();
	Money operator+(const Money&)const;
	Money operator-(const Money&)const;
	bool operator>(const Money&)const;
	bool operator<(const Money&)const;

	friend	std::ostream& operator<<(std::ostream&, const Money&);

};

std::ostream& operator<<(std::ostream&, const Money&);
Money operator%(double, Money&);
#endif