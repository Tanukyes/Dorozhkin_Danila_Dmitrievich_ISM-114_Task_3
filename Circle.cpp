#include "Circle.h"

Circle::Circle()
{
	x = 0;
	y = 0;
	radius = 1;
}

Circle::Circle(double _x, double _y, double _radius)
{
	x = _x;
	y = _y;
	radius = _radius;
}

double Circle::get_square()
{
	return M_PI * radius * radius;
}

double Circle::get_perimeter()
{
	return 2 * M_PI * radius;
}

void Circle::move(double dx, double dy)
{
	x += dx;
	y += dy;
}

string Circle::to_string()
{
	stringstream ss;
	ss << "Окружность с центром в точке (" <<
		x << ", " << y << ") и радиусом " << radius << "\n";
	return ss.str();
}
