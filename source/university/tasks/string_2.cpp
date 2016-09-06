#include <iostream>
std::string upperWords(std::string string) {
	int i;
	for (i = 1; i < string.length(); i += 1) {
		if (std::isspace(string[i - 1]) and std::islower(string[i])) {
			string[i] = toupper(string[i]);
		}
	}
	return string;
}
bool isHex(std::string & string) {
	int i;
	for (i = 0; i < string.length(); i += 1) {
		if (string[i] < 48 or 57 < string[i] and string[i] < 65 or 70 < string[i] and string[i] < 97 or 102 < string[i]) {
			return false;
		}
	}
	return true;
}
int main() {
	std::string string;
	//
	string = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	//
	std::cout << "Исходная строка:" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Замена первых букв каждого слова со строчной на заглавную." << std::endl;
	string = upperWords(string);
	std::cout << std::endl;
	//
	std::cout << "Новая строка:" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	string = "0123456789abcdefABCDEF";
	//
	std::cout << "Исходная строка:" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Является ли строка представлением числа в шестнадцатеричной системе счисления:" << std::endl;
	if (isHex(string)) {
		std::cout << "Да." << std::endl;
	} else {
		std::cout << "Нет." << std::endl;
	}
	std::cout << std::endl;
	//
	string = "0123456789abcdefABCDEFgh";
	//
	std::cout << "Исходная строка:" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Является ли строка представлением числа в шестнадцатеричной системе счисления:" << std::endl;
	if (isHex(string)) {
		std::cout << "Да." << std::endl;
	} else {
		std::cout << "Нет." << std::endl;
	}
	std::cout << std::endl;
}
