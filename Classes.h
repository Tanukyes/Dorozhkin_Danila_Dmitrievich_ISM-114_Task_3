#pragma once
#include <math.h>
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// ����� ����������
/// </summary>
class Circle
{
protected:
	// ���������� ������ � ������
	double x, y, r;
public:
	// ����������� �� ���������
	Circle()
	{
		x = 0;
		y = 0;
		r = 1;
	}

	// ����������� � �����������
	Circle(double xx, double yy, double rr)
	{
		x = xx;
		y = yy;
		r = rr;
	}

	// ����������� (����� ���� �������������) 
	// ����� ���������� ������� ����������
	virtual double get_square()
	{
		return M_PI * r * r;
	}

	// ����� ���������� ��������� ����������
	double get_perimeter()
	{
		return 2 * M_PI * r;
	}

	// ����� ����������� ����������
	void move(double dx, double dy)
	{
		x += dx;
		y += dy;
	}

	// ����� ������������� ������ �� ���������� � ���� ������
	virtual string to_string()
	{
		return "���������� � ������� � ����� (" + std::to_string(x) + ", " + 
			std::to_string(y) + ") � �������� " + std::to_string(r) + "\n";
	}
};

// ����������� ����� ��������
class Cylinder : public Circle
{
private:
	// ������ ��������
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

	// ���������������� ����� ����������
	// ������ ����������� ��������
	double get_square() override
	{
		return 2 * M_PI * r * h +
			2 * M_PI * r * r;
	}

	string to_string() override
	{
		return "������� � ������� � ����� (" + std::to_string(x) 
			+ ", " + std::to_string(y) + ") � �������� " + 
			std::to_string(r) + "; ������: " + std::to_string(h) + "\n";
	}

	// ����� ���������� ������ ��������
	double get_volume()
	{
		return M_PI * r * r * h;
	}
};