#include "Classes.h"

int main()
{
	system("chcp 1251");
	system("cls");

	Circle c1 = Circle();
	cout << c1.to_string();
	cout << "��������: " << c1.get_perimeter() << endl;
	cout << "�������: " << c1.get_square() << endl;
	c1.move(-2, 4);
	cout << "����� ����������� ���������� �� -2 �� OX � +4 �� OY: " << endl;
	cout << c1.to_string() << endl;

	Cylinder c2 = Cylinder(2, 3, 5, 7);
	cout << c2.to_string();
	cout << "�������� ����������: " << c2.get_perimeter() << endl;
	cout << "������� ������ ����������� ��������: " << c2.get_square() << endl;
	cout << "����� ��������: " << c2.get_volume() << endl;
	c2.move(3, -4);
	cout << "����� ����������� ���������� �� +3 �� OX � -4 �� OY: " << endl;
	cout << c2.to_string() << endl;

	system("pause");

	return 0;
}