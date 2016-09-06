// Рекурсия 2.
// В двумерном массиве размером m * n все элементы равны 0 или 1. Найти в этом массиве наибольший по размеру (площади) подмассив, состоящий из одних 1.
#include <iostream>
int function(int * array, int lenght, int max = 0) {
	if () {

	}
	if (function(array + 1, lenght - 1) < max) {
		return max + function(array + 1, lenght - 1);
	} else {
		return max + function(array + 1, lenght - 1);
	}
}
int main() {
	unsigned int m, n, i, j;
	std::cout << "Введите положительное число m:" << std::endl;
	//std::cin << m;
	m = 10;
	std::cout << "Введите положительное число n:" << std::endl;
	//std::cin << n;
	n = 10;
	for (i = 0; i < m; i += 1) {
		for (j = 0; j < n; j += 1) {
			std::cout << "Введите число №" << i + 1 << ":" << std::endl;
		}
	}
	int array[lenght];
	for (i = 0; i < lenght; i += 1) {
		array[i] = i;
		//std::cin << array[i];
	}
	std::cout << "Наибольшая длинна последовательности:" << std::endl;
	std::cout << function(array, lenght) << std::endl;
}
