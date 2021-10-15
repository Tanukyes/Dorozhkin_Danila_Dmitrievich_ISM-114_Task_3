#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/// <summary>
/// Класс окружности
/// </summary>
class Circle
{
protected:
	/// <summary>
	/// Координата центра по оси абсцисс
	/// </summary>
	double x;
	/// <summary>
	/// Координата центра по оси ординат
	/// </summary>
	double y;
	/// <summary>
	/// Радиус
	/// </summary>
	double radius;
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Circle();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="_x"></param>
	/// <param name="_y"></param>
	/// <param name="_radius"></param>
	Circle(double _x, double _y, double _radius);

	/// <summary>
	/// Виртуальный (может быть переопределен) 
	/// метод нахождения площади окружности
	/// </summary>
	/// <returns></returns>
	virtual double get_square();

	/// <summary>
	/// Метод нахождения периметра окружности
	/// </summary>
	/// <returns></returns>
	double get_perimeter();

	/// <summary>
	/// Метод перемещения окружности
	/// </summary>
	/// <param name="dx"></param>
	/// <param name="dy"></param>
	void move(double dx, double dy);

	/// <summary>
	/// Метод представления данных об окружности в виде строки
	/// </summary>
	/// <returns></returns>
	virtual string to_string();
};