double min(double a, double b) {
	return a < b ? a : b;
}#include <iostream>
#include "min.cpp"
int main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите два числа:" << std::endl;
	double a, b;
	std::cin >> a >> b;
	std::cout << "Наименьшее число:" << std::endl;
	std::cout << min(a, b) << std::endl;
	return 0;
}
