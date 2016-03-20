#ifndef _HOTELROOM_H
#define _HOTELROOM_H


class Hotelroom {
private:
	int *identNum;
	double *price;
	int sz;
public:
	Hotelroom();
	Hotelroom(int*, double*,int);
	Hotelroom(const Hotelroom&);
	int Set_ident(int*,int); //need another int for the size; no way to calculate array size through pointer
	int* Get_ident()const;
	int Set_price(double*,int); //need another int for the size; no way to calculate array size through pointer
	double* Get_price()const;
	int Set_size(int);
	int Get_size()const;
	int addRoom(int, int);
	double highestRoom(); //local function to find highest price (but I used a global one, which can be found at the bottom)
	~Hotelroom();

	Hotelroom& operator=(const Hotelroom&);

	int print();



};
double FindMaxPrice(const Hotelroom&); //global function to find biggest price within object

#endif
