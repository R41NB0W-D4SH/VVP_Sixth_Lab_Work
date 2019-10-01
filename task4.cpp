#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;

	cout << "Введите целые положительные числа A, B и C соответственно" << endl;
	cin >> a >> b >> c;

	if (c <= a && c <= b)
	{
		a = a * b;
		c = c * c;
		b = a / c;
		a = a % c;
		cout << "Количество целых квадаротов в прямоугольнике равно " << b << endl;
		cout << "Площадь незанятой части прямоугольника составляет " << a << endl;
	}
	else
	{
		cout << "Квадрат не вмещается в прямоугольник" << endl;
	}

	system("pause");
	return 0;
}
