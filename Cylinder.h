#pragma once
#include "Circle.h"

/// <summary>
/// Производный класс цилиндра
/// </summary>
class Cylinder : public Circle
{
private:
	/// <summary>
	/// Высота цилиндра
	/// </summary>
	double height;
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Cylinder();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	Cylinder(double _x, double _y,
		double _radius, double _height);

	/// <summary>
	/// Переопределенный метод вычисления
	//  полной поверхности цилиндра
	/// </summary>
	/// <returns></returns>
	double get_square() override;

	/// <summary>
	/// Переопределенный метод вывода 
	/// информации в виде строки
	/// </summary>
	/// <returns></returns>
	string to_string() override;

	/// <summary>
	/// Метод вычисления объема цилиндра
	/// </summary>
	/// <returns></returns>
	double get_volume();
};
