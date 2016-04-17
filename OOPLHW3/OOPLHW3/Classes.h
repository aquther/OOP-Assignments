#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
class Employee {
	friend std::ostream & operator<<(std::ostream&, Employee&);
protected:
	char* name;
public:
	
	Employee(char* = "No Name");
	int set_name(char*);
	char* get_name()const;
	Employee(const Employee&);
	~Employee();
	Employee& operator=(const Employee&);
	

};
class Programmer : public Employee {
	friend std::ostream& operator<< (std::ostream&, Programmer&);

private:
	double salary;
public:
	Programmer(char* = "No Name", double = 0);
	int set_salary(double);
	double get_salary()const;
	Programmer(const Programmer&);
	~Programmer();
	Programmer& operator=(const Programmer&);
};
std::ostream & operator<<(std::ostream&, Employee&);
std::ostream& operator<< (std::ostream&, Programmer&);
#endif