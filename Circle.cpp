#include "Circle.h"

Circle::Circle()
{
    x = 0;
    y = 0;
    radius = 1;
}

Circle::Circle(const double _x, const double _y, const double _radius)
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

void Circle::move(const double dx, const double dy)
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

void Circle::setRadius(const double radius){
    if(radius > 0) {
        this->radius = radius;
    } else {
        cout << "Invalid radius value\n";
    }
}

Circle::~Circle()
{

}
