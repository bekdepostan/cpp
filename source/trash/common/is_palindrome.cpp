#include <iostream>
#include "is_palindrome.cpp"
void main() {
	setlocale(LC_ALL, "");
	std::cout << "Введите положительное целое число:" << std::endl;
	unsigned int num;
	std::cin >> num;
	if (is_palindrome(num)) {
		std::cout << "Число является палиндромом." << std::endl;
	} else {
		std::cout << "Число не является палиндромом." << std::endl;
	}
	system("pause");
}
