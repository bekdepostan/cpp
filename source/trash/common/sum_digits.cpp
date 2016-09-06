#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите целое число:" << std::endl;
	int num;
	std::cin >> num;
	std::cout << "Сумма цифр:" << std::endl;
	std::cout << sum_digits(num) << std::endl;
	return 0;
}
