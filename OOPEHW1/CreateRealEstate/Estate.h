#ifndef _Estate_H
#define _Estate_h

class Estate {
public:
	Estate();
	Estate(char*, char*, double, double);

	int Read();
	int Print()const;
	int SetName(char*);
	int SetAddres(char*);
	int SetKvadratura(double);
	int SetcenaKv(double);

	char* GetName()const;
	char* GetAddress()const;
	double Getkvadratura()const;
	double GetcenaKv()const;

	double CalcPrice();

	~Estate();

private:
	char*name;
	char*address;
	double kvadratura;
	double cenaKv;
};





#endif