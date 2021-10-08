#include "Classes.h"

int main()
{
	system("chcp 1251");
	system("cls");

	Circle c1 = Circle();
	cout << c1.to_string();
	cout << "Периметр: " << c1.get_perimeter() << endl;
	cout << "Площадь: " << c1.get_square() << endl;
	c1.move(-2, 4);
	cout << "После перемещения окружности на -2 по OX и +4 по OY: " << endl;
	cout << c1.to_string() << endl;

	Cylinder c2 = Cylinder(2, 3, 5, 7);
	cout << c2.to_string();
	cout << "Периметр окружности: " << c2.get_perimeter() << endl;
	cout << "Площадь полной поверхности цилиндра: " << c2.get_square() << endl;
	cout << "Объем цилиндра: " << c2.get_volume() << endl;
	c2.move(3, -4);
	cout << "После перемещения окружности на +3 по OX и -4 по OY: " << endl;
	cout << c2.to_string() << endl;

	system("pause");

	return 0;
}
