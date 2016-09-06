#include <iostream>
#include <cstdlib>
int ** newArray(int rows, int cols) {
	int r, c;
	int ** array;
	array = new int * [rows];
	for (r = 0; r < rows; r += 1) {
		array[r] = new int[cols];
		for (c = 0; c < cols; c += 1) {
			array[r][c] = std::rand();
		}
	}
	return array;
}
void printArray(int ** array, int rows, int cols) {
	int r, c;
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			std::cout << "[" << r << "][" << c << "] = " << array[r][c] << std::endl;
		}
	}
}
void transposeArray(int ** array, int rows, int cols) {
	int r, c;
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			std::swap(array[r][c], array[c][r]);
		}
	}
}
long sumUnderSecondaryDiagonal(int ** array, int rows, int cols) {
	long sum;
	int r, c;
	sum = 0;
	for (r = 0; r < rows; r += 1) {
		for (c = cols - r; c < cols; c += 1) {
			sum += array[r][c];
		}
	}
	return sum;
}
int main() {
	const int rows = 9;
	const int cols = 9;
	int ** array;
	long sum;
	//
	array = newArray(rows, cols);
	std::cout << std::endl;
	//
	std::cout << "Исходный массив:" << std::endl;
	printArray(array, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "Транспонированый массив:" << std::endl;
	transposeArray(array, rows, cols);
	printArray(array, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "Сумма элементовв под побочной диагональю:" << std::endl;
	sum = sumUnderSecondaryDiagonal(array, rows, cols);
	std::cout << sum << std::endl;
	std::cout << std::endl;
}
