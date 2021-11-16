#include "Cylinder.h"

Cylinder::Cylinder()
{
    x = 0;
    y = 0;
    radius = 1;
    height = 1;
}

Cylinder::Cylinder(const double _x, const double _y,
                   const double _radius, const double _height)
{
    x = _x;
    y = _y;

    setRadius(_radius);
    setHeight(_height);
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

void Cylinder::setRadius(const double radius)
{
    if(radius > 0) {
        this->radius = radius;
    } else {
        cout << "Invalid radius value\n";
    }
}

void Cylinder::setHeight(const double height) {
    if(height > 0) {
        this->height = height;
    } else {
        cout << "Invalid height value\n";
    }
}
Cylinder::~Cylinder()
{

}
