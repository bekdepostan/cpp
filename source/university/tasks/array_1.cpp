#include <iostream>
#include "../Array/common.cpp"
int main() {
	const int rows = 7;
	const int cols = 5;
	const int size = 57;
	int * flat;
	int ** rect;
	int flat_max, rect_max;
	//
	flat = array::flat::getNew(size);
	array::flat::fill(flat, size);
	array::flat::clip(flat, size);
	rect = array::rect::getNew(rows, cols);
	array::rect::fill(rect, rows, cols);
	array::rect::clip(rect, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "Элементы одномерного массива:" << std::endl;
	array::flat::print(flat, size);
	std::cout << std::endl;
	//
	std::cout << "Элементы двумерного массива:" << std::endl;
	array::rect::printTable(rect, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "Максимальное значение одномерного массива:" << std::endl;
	flat_max = array::flat::max(flat, size);
	std::cout << flat_max << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Максимальное значение двумерного массива:" << std::endl;
	rect_max = array::rect::max(rect, rows, cols);
	std::cout << rect_max << std::endl;
	std::cout << std::endl;
	//
	std::cout << "Взаимозамена максимальных значений двух массивов." << std::endl;
	array::rect::interchange(rect, rows, cols, rect_max, flat_max);
	array::flat::interchange(flat, size, flat_max, rect_max);
	std::cout << std::endl;
	//
	std::cout << "Элементы одномерного массива:" << std::endl;
	array::flat::print(flat, size);
	std::cout << std::endl;
	//
	std::cout << "Таблица элементов двумерного массива:" << std::endl;
	array::rect::printTable(rect, rows, cols);
	std::cout << std::endl;
}
