#include <iostream>
#include "gcd.cpp"
#include "lcm.cpp"
void main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите два целых числа:" << std::endl;
	int a, b;
	std::cin >> a >> b;
	std::cout << "Наименьшее общее кратное:" << std::endl;
	std::cout << lcm(a, b) << std::endl;
	system("pause");
}
