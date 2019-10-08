#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, d, e;

	cout << "Введите целые положительные числа A, B и C соответственно" << endl;
	cin >> a >> b >> c;

	if (c <= a && c <= b)
	{
		d = a / c;
		e = b / c;
		a = a * b;
		b = d * e;
		c = c * c;
		a = a - (c * b);
		cout << "Количество целых квадаротов в прямоугольнике равно " << b << endl;
		cout << "Площадь незанятой части прямоугольника составляет " << a << endl;
	}
	else
	{
		cout << "Квадрат или квадраты не вмещаются в прямоугольник" << endl;
	}

	system("pause");
	return 0;
}
