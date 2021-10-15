#pragma once
#include "Circle.h"

/// <summary>
/// ����������� ����� ��������
/// </summary>
class Cylinder : public Circle
{
private:
	/// <summary>
	/// ������ ��������
	/// </summary>
	double height;
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Cylinder();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	Cylinder(double _x, double _y,
		double _radius, double _height);

	/// <summary>
	/// ���������������� ����� ����������
	//  ������ ����������� ��������
	/// </summary>
	/// <returns></returns>
	double get_square() override;

	/// <summary>
	/// ���������������� ����� ������ 
	/// ���������� � ���� ������
	/// </summary>
	/// <returns></returns>
	string to_string() override;

	/// <summary>
	/// ����� ���������� ������ ��������
	/// </summary>
	/// <returns></returns>
	double get_volume();
};