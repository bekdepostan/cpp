#include <iostream>
#include <fstream>
namespace common {
	namespace print {
		void commands() {
			std::cout << "Доступные команды:" << std::endl;
			std::cout << "0. Выход." << std::endl;
			std::cout << "1. Создать справочник факультетов." << std::endl;
			std::cout << "2. Создать справочник специальностей." << std::endl;
			std::cout << "3. Создать справочник студентов." << std::endl;
			std::cout << "4. Создать выборку по номеру специальности." << std::endl;
		}
		void wrong() {
			std::cout << "Неверный номер команды:" << std::endl;
		}
		void wrong() {
			std::cout << "Введите :" << std::endl;
		}
	}
	namespace input {
		std::string command() {
			std::string command;
			std::cout << "Введите номер команды:" << std::endl;
			std::cin >> command;
		}
	}
	namespace create {
		void faculties() {
			std::fstream stream;
			stream.open("files/faculties.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
		void specialties() {
			std::fstream stream;
			stream.open("files/specialties.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
		void students() {
			std::fstream stream;
			stream.open("files/students.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
		void learning() {
			std::fstream stream, specialty_id;
			std::cout << "Ведите код специальности:" << std::endl;
			std::cin >> specialty_id;
			common::create::education();
			common::create::education();
			std::cout << "Доступные специальности:" << std::endl;
			stream.open("files/learning.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
	}
}
