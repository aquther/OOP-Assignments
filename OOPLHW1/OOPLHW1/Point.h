#ifndef _POINT_H
#define _POINT_H

class Point {
public:
	Point();
	Point(double, double, double);
	void Read();
	void Print();
	void SetX(double);
	void SetY(double);
	void SetZ(double);
	double GetX();
	double GetY();
	double GetZ();
	
	void ScaleABC();
	void ScaleVector();

private:
	double x;
	double y;
	double z;


};



#endif
