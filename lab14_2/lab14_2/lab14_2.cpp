// lab14_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int ai = 10;
	const int aj = 10;
	int a[ai][aj];
	bool f ;

	for (int i = 0; i < ai; i++)
	{
		for (int j = 0; j < aj; j++)
		{
			a[i][j] = rand() % 22 - 20;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < ai; i++) 
	{
		f = false;
		for (int j = 0; j < aj; j++) {
			if (a[i][j] > 0) 
			{
				f = true;
				break;
			}

		}
		if (f == false) break;
	}
	if (f == false) 
	{
		for (int i = 0; i < ai; i++)
			for (int j = 0; j < aj; j++)
				a[i][j] = a[i][j] * (-1);
	}

	for (int i = 0; i < ai; i++)
	{
		for (int j = 0; j < aj; j++)
		{	cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
