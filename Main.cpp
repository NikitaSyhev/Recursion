//Шаблон

#include <iostream>

int factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}

int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}


int main() {
	setlocale(LC_ALL, "Russian");
		int n, m;


		//Задача 1: Факториал
		std::cout << "Задача 1.\nВведите число: ";
		std::cin >> n;
		std::cout << "! = " << factorial(n) << '\n';

		//Задача 2: Фибоначчи
		std::cout << "Задача 2.\nВведите номер числа Фибоначчи: ";
		std::cin >> m;
		std::cout << "Число Фибоначчи под номером " << m << " равно " << fibonacci(m) << ".\n";

		std::cout << "Первые 13 чисел Фибоначчи: \n";
		for (int i = 0; i < 13; i++)
			std::cout << fibonacci(i) << ", ";
		std::cout << "\b\b.\n";



















	return 0;
}

