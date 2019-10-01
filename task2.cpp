#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string week[7] = { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
	int k;

	cout << "Введите какой-нибудь день в году числом (1 - 365)" << endl;
	cin >> k;
	k = k % 6;

	if (k != 3)
	{
		cout << "День недели " << week[k] << endl;
	}
	else
	{
		cout << "Это " << week[k] << " чел" << endl;
	}

	system("pause");
	return 0;
}
