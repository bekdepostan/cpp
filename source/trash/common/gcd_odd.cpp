#include <iostream>
#include "gcd.cpp"
#include "gcd_odd.cpp"
void main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите два целых числа:" << std::endl;
	int a, b;
	std::cin >> a >> b;
	std::cout << "Наибольший нечётный общий делитель:" << std::endl;
	std::cout << gcd_odd(a, b) << std::endl;
	system("pause");
}
