// Геометрия 2.
// K точек с заданными координатами X1, X2, ..., Xk находятся на одной прямой. Определить координату точки Z, находящейся на этой же прямой такой, что сумма расстояний от нее до данных точек минимальна.
#include <iostream>
int main() {
	int k, i;
	float sum, point;
	std::cout << "Введите количество точек:" << std::endl;
	std::cin >> k;
	for (i = 0; i < k; i += 1) {
		std::cout << "Введите координаты точки №" << i + 1 << ":" << std::endl;
		std::cin >> point;
		sum += point;
	}
	std::cout << "Координаты точки Z:" << std::endl;
	std::cout << sum / k << std::endl;
}
