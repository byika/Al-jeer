// ConsoleApplication35.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	
	
	//1.Чётные числа.
	int i = 1;

	while (i <= 100) {
		if (i % 2 == 0) {
			std::cout << i << "\n";
		}
		i++;
	}


	//2.Сумма чисел в диапазоне.

	int n, m;
	int res = 0;
	int num = 0;

	std::cout << "n, m:";
	std::cin >> n >> m;

	if (n > m){
		num = n;
		n = m;
		m = num;

		while (n + 1 < m) {
			res += n + 1;
			n++;
		}
		std::cout << res << "\n";
	}
	else if (n == m) {
		std::cout << "0\n";
	}
	else if (n < m) {
		while (n + 1 < m) {
			res += n + 1;
			n++;
		}
		std::cout << res << "\n";
	}
	else {
		std::cout << "?\n";
	}

	
	//3.Таблица температур.

	float start, stop;
	float buff = 0;

	std::cout << "start, stop:";
	std::cin >> start >> stop;

	if (start > stop) {
		buff = start;
		start = stop;
		stop = buff;

		while (start <= stop) {
			std::cout << start << "\t - \t" << start * 1.8 + 32 << "\n";
			start++;
		}
	}
	else if (start == stop) {
		std::cout << start << "\t - \t" << start * 1.8 + 32 << "\n";
	}
	else if (start < stop) {
		while (start < stop) {
			std::cout << start << "\t - \t" << start * 1.8 + 32 << "\n";
			start++;
		}
	}
	else {
		std::cout << "?\n";
	}
	
	//4.Факториал.

	float f;
	int bf = 1;
	float rs = 1;

	std::cout << "f:";
	std::cin >> f;

	while ( bf <= f) {
		rs *= bf;
		bf++;
	}

	std::cout << rs << "\n";;


	//5.Разрядность.

	int number;
	int des = 1;
	float summa = 0;
	int k = 1;

	std::cout << "number:";
	std::cin >> number;

	while (number / des >= 10) {
		summa += number / des % 10;
		k++;
		des *= 10;
	}

	std::cout << "PA3PYADHOCTb: " << k << ", CYMMA: " << summa << "\n";;
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
