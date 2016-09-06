#include <iostream>
int main() {
	int * array;
	int size, i;
	//
	size = 0;
	//array = malloc(sizeof(int) * size);
	array = new int[size];
	std::cout << std::endl;
	//
	std::cout << "Адрес указателя на массив:" << std::endl;
	std::cout << &array << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Размер массива:" << std::endl;
	std::cout << size << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Введите значения для массива:" << std::endl;
	while (true) {
		//std::cout << cin.fail() << std::endl;
		if (std::cin >> array[size]) {
			size += 1;
		} else {
			break;
		}
	}
	std::cout << std::endl;
	//
	std::cout << "Адрес указателя на массив:" << std::endl;
	std::cout << &array << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Размер массива:" << std::endl;
	std::cout << size << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Адресса, индексы и значения массива:" << std::endl;
	for (i = 0; i < size; i += 1) {
		std::cout << &array[i] << ", [" << i << "] = " << array[i] << std::endl;
	}
	std::cout << std::endl;
	//
	//free(array);
	delete [] array;
}
