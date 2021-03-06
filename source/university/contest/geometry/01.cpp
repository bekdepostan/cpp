// Геометрия 1.
// Имеются три точки с целочисленными координатами (X1, Y1), (X2, Y2), (X3, Y3), являющиеся вершинами треугольника. Определить, принадлежит ли точка Z с координатами (X, Y) какой-либо стороне треугольника или лежит внутри или вне его.
#include <iostream>
int main() {
	float a[2];
	float b[2];
	float c[2];
	float z[2];
	float i, j, k;
	//a[0] = 0; a[1] = 0;
	//b[0] = 9; b[1] = 0;
	//c[0] = 0; c[1] = 9;
	//z[0] = 2; z[1] = 2;
	std::cout << "Введите координаты точки A:" << std::endl;
	std::cin >> a[0] >> a[1];
	std::cout << "Введите координаты точки B:" << std::endl;
	std::cin >> b[0] >> b[1];
	std::cout << "Введите координаты точки C:" << std::endl;
	std::cin >> c[0] >> c[1];
	std::cout << "Введите координаты точки Z:" << std::endl;
	std::cin >> z[0] >> z[1];
	i = (a[0] - z[0]) * (b[1] - a[1]) - (b[0] - a[0]) * (a[1] - z[1]);
	j = (b[0] - z[0]) * (c[1] - b[1]) - (c[0] - b[0]) * (b[1] - z[1]);
	k = (c[0] - z[0]) * (a[1] - c[1]) - (a[0] - c[0]) * (c[1] - z[1]);
	if (i == 0 && j == 0 && k == 0) {
		std::cout << "Все точки равны." << std::endl;
	} else
	if (i == 0 && k == 0) {
		std::cout << "Точка Z равна точке A." << std::endl;
	} else
	if (i == 0 && j == 0) {
		std::cout << "Точка Z равна точке B." << std::endl;
	} else
	if (j == 0 && k == 0) {
		std::cout << "Точка Z равна точке C." << std::endl;
	} else
	if (i == 0) {
		std::cout << "Точка Z лежит на стороне AB." << std::endl;
	} else
	if (j == 0) {
		std::cout << "Точка Z лежит на стороне BC." << std::endl;
	} else
	if (j == 0) {
		std::cout << "Точка Z лежит на стороне CD." << std::endl;
	} else
	if (0 < i && 0 < j && 0 < k || i < 0 && j < 0 && k < 0) {
		std::cout << "Точка Z лежит внутри треугольника." << std::endl;
	} else {
		std::cout << "Точка Z лежит вне треугольника." << std::endl;
	}
}
