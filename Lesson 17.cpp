
#include <iostream>
#include <cmath>

class Vector
{
public:
	
	Vector()
	{}
	Vector(double  _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		std::cout << "\n" << x << " " << y << " " << z << "\n" << "Vector lenght=" << sqrt((x * x) + (y * y) + (z * z));
	}
private:
	double x = 3;
	double y = 4;
	double z = 10;
	
};

int main()
{
	
	Vector v;
	v.Show();
}