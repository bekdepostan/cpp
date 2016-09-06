#include <iostream>
#include "gcd.cpp"
void main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите два целых числа:" << std::endl;
	int a, b;
	std::cin >> a >> b;
	std::cout << "Наибольший общий делитель:" << std::endl;
	std::cout << gcd(a, b) << std::endl;
	system("pause");
}
