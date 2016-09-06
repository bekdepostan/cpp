#include <iostream>
#include "is_prime.cpp"
void main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите положительное целое число:" << std::endl;
	unsigned int num;
	std::cin >> num;
	if (is_prime(num)) {
		std::cout << "Число является простым." << std::endl;
	} else {
		std::cout << "Число не является простым." << std::endl;
	}
	system("pause");
}
