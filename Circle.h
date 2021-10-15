#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/// <summary>
/// ����� ����������
/// </summary>
class Circle
{
protected:
	/// <summary>
	/// ���������� ������ �� ��� �������
	/// </summary>
	double x;
	/// <summary>
	/// ���������� ������ �� ��� �������
	/// </summary>
	double y;
	/// <summary>
	/// ������
	/// </summary>
	double radius;
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Circle();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="_x"></param>
	/// <param name="_y"></param>
	/// <param name="_radius"></param>
	Circle(double _x, double _y, double _radius);

	/// <summary>
	/// ����������� (����� ���� �������������) 
	/// ����� ���������� ������� ����������
	/// </summary>
	/// <returns></returns>
	virtual double get_square();

	/// <summary>
	/// ����� ���������� ��������� ����������
	/// </summary>
	/// <returns></returns>
	double get_perimeter();

	/// <summary>
	/// ����� ����������� ����������
	/// </summary>
	/// <param name="dx"></param>
	/// <param name="dy"></param>
	void move(double dx, double dy);

	/// <summary>
	/// ����� ������������� ������ �� ���������� � ���� ������
	/// </summary>
	/// <returns></returns>
	virtual string to_string();
};