#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string week[7] = { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
	int n, k;

	cout << "Введите какой-нибудь день в году числом (1 - 365)" << endl;
	cin >> k;
	n = k % 7;
	if (k >= 1 && k <= 365)
	{
		cout << "День недели " << week[n] << endl;
	}
	else
	{
		cout << "Вы ввели некорректное число. Следуйте условиям!" << endl;
	}

	system("pause");
	return 0;
}
