﻿// lab7_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
	int main()
	{
		setlocale(LC_CTYPE, "Russian");
		float a = 4, k = 1, d = 51.9e-2, c, x, y;
		for (int i = 1; i <= 3; i++)
		{
			printf("Введите c=");
			scanf_s("%f", &c);
			c = 3.7;
			while (c <= 5)
			{
				x = tan(pow(a, 2) - 1) / (d + 1);
				if ((3 * x) < (a * c))
					y = a * k + d;
				else
					y = cos(a * k) * exp(a + 1);
				cout << "при c равным " << c << "\t";
				cout << "x=" << x << "\n";
				cout << "y=" << y << endl;
				c = c + 0.1;
			}
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
