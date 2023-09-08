#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Задание №1
	setlocale(LC_ALL, "Rus");

	try
	{
		double t, l;

		cout << "Введите переменную t" << endl;
		cin >> t;

		cout << "Введите переменную l" << endl;
		cin >> l;

		cout << "R = " << 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9 << endl;
	}
	catch (const exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}



	system("pause");
}

