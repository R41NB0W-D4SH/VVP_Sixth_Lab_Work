#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, n1;

	cout << "Введите количество секунд прошедших с начала суток" << endl;
	cin >> n;
	cout << "Количество секунд прошедших с начала последней минуты равно " << n % 60 << endl;

	system("pause");
	return 0;
}
