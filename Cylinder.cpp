#include "Cylinder.h"

Cylinder::Cylinder()
{
	x = 0;
	y = 0;
	radius = 1;
	height = 1;
}

Cylinder::Cylinder(double _x, double _y,
	double _radius, double _height)
{
	x = _x;
	y = _y;
	radius = _radius;
	height = _height;
}

double Cylinder::get_square()
{
	return 2 * M_PI * radius * height +
		2 * M_PI * radius * radius;
}

string Cylinder::to_string()
{
	stringstream ss;
	ss << "Цилиндр с центром в точке (" << x << ", " << y <<
		") и радиусом " << radius << "; высота: " << height << "\n";
	return ss.str();
}

double Cylinder::get_volume()
{
	return M_PI * radius * radius * height;
}