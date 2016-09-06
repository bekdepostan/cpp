#include <iostream>
#include "../Array/common.cpp"
int main() {
	const int rows = 7;
	const int cols = 9;
	const int size = 70;
	int * flat;
	int ** rect;
	int flat_sumNegative, rect_sumPositive;
	float value;
	//
	flat = array::flat::getNew(size);
	array::flat::fill(flat, size);
	array::flat::clip(flat, size);
	array::flat::increase(flat, size, -500);
	rect = array::rect::getNew(rows, cols);
	array::rect::fill(rect, rows, cols);
	array::rect::clip(rect, rows, cols);
	array::rect::increase(rect, rows, cols, -500);
	std::cout << std::endl;
	//
	std::cout << "Элементы одномерного массива:" << std::endl;
	array::flat::print(flat, size);
	std::cout << std::endl;
	//
	std::cout << "Элементы двумерного массива:" << std::endl;
	array::rect::print(rect, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "Сумма отрицательных элементов одномерного массива:" << std::endl;
	flat_sumNegative = array::flat::sumNegative(flat, size);
	std::cout << flat_sumNegative << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Сумма положительных элементов двумерного массива:" << std::endl;
	rect_sumPositive = array::rect::sumPositive(rect, rows, cols);
	std::cout << rect_sumPositive << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Значение выражения:" << std::endl;
	value = float(rect_sumPositive + flat_sumNegative) / (rect_sumPositive - flat_sumNegative);
	std::cout << value << std::endl;
	std::cout << std::endl;
}
