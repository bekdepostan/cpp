#include <iostream>
#include "is_pythagorean_prime.cpp"
void main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите целое число:" << std::endl;
	int num;
	std::cin >> num;
	if (is_pythagorean_prime(num)) {
		std::cout << "Число является простым числом Пифагора." << std::endl;
	} else {
		std::cout << "Число не является простым числом Пифагора." << std::endl;
	}
	system("pause");
}
