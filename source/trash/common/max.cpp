#include <iostream>
#include "max.cpp"
int main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите два числа:" << std::endl;
	double a, b;
	std::cin >> a >> b;
	std::cout << "Наибольшее число:" << std::endl;
	std::cout << max(a, b) << std::endl;
	return 0;
}
