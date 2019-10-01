#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string week[7] = { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
	int n, m, k;

	cout << "Введите какой-нибудь день в году числом (1 - 365)" << endl;
	cin >> k;
	cout << "Введите какую-нибудь неделю в году числом (1 - 7)" << endl;
	cin >> m;
	if (k >= 1 && k <= 365 && m >= 1 && m <= 7)
	{
		m = m - 1;
		n = (k + m) % 7;
		cout << "День недели " << week[n] << endl;
	}
	else
	{
		cout << "Вы ввели некорректное число. Следуйте условиям!" << endl;
	}

	system("pause");
	return 0;
}
