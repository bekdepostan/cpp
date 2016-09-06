#include <iostream>
#include <iomanip>
// Количество делителей
int divCount(int n) {
	//return n;
	int i, count;
	count = 0;
	for (i = 1; i <= n; i += 1) {
		if (0 == n % i) {
			count += 1;
		}
	}
	return count;
}
namespace array {
	// Вывод
	void print(int * array, int size) {
		int i, width;
		width = 10;
		std::cout << std::setw(width) << "/index" << std::setw(width) << "/value" << std::setw(width) << "/count" << std::endl;
		for (i = 0; i < size; i += 1) {
			std::cout << std::setw(width) << i << std::setw(width) << array[i] << std::setw(width) << divCount(array[i]) << std::endl;
		}
	}
	// Заполнение
	void fill(int * array, int size) {
		int i;
		for (i = 0; i < size; i += 1) {
			array[i] = std::rand() % 1000;
		}
	}
}
namespace sort {
	// Среднее арифметическое количества делителей
	int avgDivCount(int *array, int size) {
		int i, value;
		value = 0;
		for (i = 0; i < size; i += 1) {
			value += divCount(array[i]);
		}
		return value / size;
	}
	// Проверка сортировки
	bool testByDivCount(int *array, int size) {
		int i;
		for (i = 1; i < size; i += 1) {
			if (divCount(array[i]) < divCount(array[i - 1])) {
				return false;
			}
		}
		return true;
	}
	// Проверка сортировки
	unsigned test(signed *array, unsigned length) {
		unsigned i;
		for (i = 1; i < length; i += 1) {
			if (array[i] < array[i - 1]) {
				return i;
			}
		}
		return length;
	}
	// Быстрая сортировка по возрастанию количества делителей
	void quickByDivCount(int *array, int size) {
		int l, r;
		int value;
		l = 0;
		r = size - 1;
		value = avgDivCount(array, size);
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
		//std::cout << r << " @ " << l << std::endl;
		if (1 < l) {
			quickByDivCount(array, l);
		}
		if (1 < size - l) {
			quickByDivCount(array + l, size - l);
		}
	}
	// Последовательный поиск
	// Метод транспозиции
	// Метод перемещения в начало
	int start(int *k, int n, int key) {
	}
	// Индексно-последовательный поиск
	int func_1() {
	}
	// Двоичный поиск
}
