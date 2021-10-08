#pragma once
#include <math.h>
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// класс окружности
/// </summary>
class Circle
{
protected:
	// координаты центра и радиус
	double x, y, r;
public:
	// конструктор по умолчанию
	Circle()
	{
		x = 0;
		y = 0;
		r = 1;
	}

	// конструктор с параметрами
	Circle(double xx, double yy, double rr)
	{
		x = xx;
		y = yy;
		r = rr;
	}

	// виртуальный (может быть переопределен) 
	// метод нахождения площади окружности
	virtual double get_square()
	{
		return M_PI * r * r;
	}

	// метод нахождения периметра окружности
	double get_perimeter()
	{
		return 2 * M_PI * r;
	}

	// метод перемещения окружности
	void move(double dx, double dy)
	{
		x += dx;
		y += dy;
	}

	// метод представления данных об окружности в виде строки
	virtual string to_string()
	{
		return "Окружность с центром в точке (" + std::to_string(x) + ", " + 
			std::to_string(y) + ") и радиусом " + std::to_string(r) + "\n";
	}
};

// производный класс цилиндра
class Cylinder : public Circle
{
private:
	// высота цилиндра
	double h;
public:
	Cylinder()
	{
		x = 0;
		y = 0;
		r = 1;
		h = 1;
	}

	Cylinder(double xx, double yy, 
		double rr, double hh)
	{
		x = xx;
		y = yy;
		r = rr;
		h = hh;
	}

	// переопределенный метод вычисления
	// полной поверхности цилиндра
	double get_square() override
	{
		return 2 * M_PI * r * h +
			2 * M_PI * r * r;
	}

	string to_string() override
	{
		return "Цилиндр с центром в точке (" + std::to_string(x) 
			+ ", " + std::to_string(y) + ") и радиусом " + 
			std::to_string(r) + "; высота: " + std::to_string(h) + "\n";
	}

	// метод вычисления объема цилиндра
	double get_volume()
	{
		return M_PI * r * r * h;
	}
};