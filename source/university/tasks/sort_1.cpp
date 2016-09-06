#include <cstdlib>
#include <iomanip>
#include <iostream>
// Количество делителей
int divCount(int number) {
	int count, i;
	count = 0;
	for (i = 1; i < number; i += 1) {
		if (number % i == 0) {
			count += 1;
		}
	}
	return count;
}
// Среднее арифметическое
int arrayAvgDivCount(int * array, int size) {
	int value, i;
	value = 0;
	for (i = 0; i < size; i += 1) {
		value += divCount(array[i]);
	}
	return value / size;
}
// Вывод
void arrayPrint(int * array, int size) {
	int width, i;
	width = 12;
	std::cout << std::setw(width) << "index" << std::setw(width) << "value" << std::setw(width) << "count" << std::endl;
	for (i = 0; i < size; i += 1) {
		std::cout << std::setw(width) << i << std::setw(width) << array[i] << std::setw(width) << divCount(array[i]) << std::endl;
	}
}
// Заполнение
void arrayFill(int * array, int size) {
	int i;
	for (i = 0; i < size; i += 1) {
		array[i] = std::rand() % 1000;
	}
}
// Проверка сортировки
bool testSortByDivCount(int * array, int size) {
	int i;
	for (i = 1; i < size; i += 1) {
		if (divCount(array[i]) < divCount(array[i - 1])) {
			return false;
		}
	}
	return true;
}
// Быстрая сортировка по возрастанию количества делителей
void sortQuickByDivCount(int * array, int size) {
	int l, r, value;
	l = 0;
	r = size - 1;
	value = divCount(array[std::rand() % (size - 1)]);
	//value = arrayAvgDivCount(array, size);
	while (l <= r) {
		while (divCount(array[l]) < value) {
			l += 1;
		}
		while (value < divCount(array[r])) {
			r -= 1;
		}
		if (l <= r) {
			std::swap(array[l], array[r]);
			l += 1;
			r -= 1;
		}
	}
	if (1 < l) {
		sortQuickByDivCount(array, l);
	}
	if (1 < size - l) {
		sortQuickByDivCount(array + l, size - l);
	}
}
int main() {
	const int size = 10;
	int array[size];
	//
	arrayFill(array, size);
	std::cout << std::endl;
	//
	std::cout << "Исходный массив:" << std::endl;
	arrayPrint(array, size);
	std::cout << std::endl;
	//
	std::cout << "Отсортированный массив:" << std::endl;
	sortQuickByDivCount(array, size);
	arrayPrint(array, size);
	std::cout << std::endl;
	//
	if (testSortByDivCount(array, size) == true) {
		std::cout << "Прошел проверку." << std::endl;
	} else {
		std::cout << "Не прошел проверку." << std::endl;
	}
	std::cout << std::endl;
}
