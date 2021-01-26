#include<iostream>
using namespace std;

class MyPoint {
private :
	double x;
	double y;

public:
	double get_x()
	{
		return x;
	}
	double get_y()
	{
		return y; 
	}

	double distance(double x2,double y2)
	{
		return sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));
	}

	double distance(MyPoint z)
	{
     	return sqrt(pow(z.x - x, 2) + pow(z.y - y, 2));
	}

	MyPoint() {

		x = 0;
		y = 0;
	}
	MyPoint(double x11, double y11)
	{
		x = x11;
		y = y11;
	}
};



	int main(){

		MyPoint point1, point2(10, 30.5);


		cout << "The distance between (0, 0) and (10, 30.5) is  " << point1.distance(point2) << endl;



	return 0;

	}