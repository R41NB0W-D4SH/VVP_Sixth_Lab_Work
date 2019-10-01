#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, m;

	cout << "Введите нужный вам год" << endl;
	cin >> n;

	m = n / 100;
	if (n % 100 == 0)
	{
		cout << n << " год принадлежит " << m << "столетию" << endl;
	}
	else
	{
		cout << n << " год принадлежит " << m + 1 << "столетию" << endl;
	}

	system("pause");
	return 0;
}

