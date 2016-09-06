#include <iostream>
//#include "common.cpp"
int main() {
	std::string command;
	do {
		std::cin >> command;
		if (command == "") {
			std::cout << "Доступные команды:" << std::endl;
			std::cout << "0. Выход." << std::endl;
			std::cout << "1. Создать справочник факультетов." << std::endl;
			std::cout << "2. Создать справочник специальностей." << std::endl;
			std::cout << "3. Создать справочник студентов." << std::endl;
			std::cout << "4. Создать выборку по номеру специальности." << std::endl;
		}
		if (command == "0") {
			//break;
		}
		if (command == "1") {
			//common::create::faculties();
		} else
		if (command == "2") {
			//common::create::specialties();
		} else
		if (command == "3") {
			//common::create::students();
		} else
		if (command == "4") {
			//std::fstream stream;
			//common::create::learning();
		} else {
			std::cout << "Введенной Команды нет среди доступных:" << std::endl;
		}
	} while (command != "0");
}
