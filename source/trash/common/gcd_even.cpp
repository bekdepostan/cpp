#include <iostream>
#include "gcd.cpp"
#include "gcd_even.cpp"
void main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите два целых числа:" << std::endl;
	int a, b;
	std::cin >> a >> b;
	int div_even = gcd_even(a, b);
	if (div_even) {
		std::cout << "Наибольший чётный общий делитель:" << std::endl;
		std::cout << div_even << std::endl;
	}
	else std::cout << "Наибольшего чётного общего делителя нет." << std::endl;
	std::cout << gcd_even(a, b) << std::endl;
	system("pause");
}
