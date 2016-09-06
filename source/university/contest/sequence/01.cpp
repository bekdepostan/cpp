// Последовательности 1.
// Имеется N диапазонов целых чисел, каждый из которых задается своим начальным и конечным значением. Определить числовой промежуток (начало и конец), в котором находится максимальное количество элементов, принадлежащих всем исходным диапазонам.
#include <iostream>
int main() {
	int n, i, max, k, count, j;
	float left, right;
	std::cout << "Введите количество диапозонов:" << std::endl;
	std::cin >> n;
	float ranges[n][2];
	i = 0;
	do {
		std::cout << "Введите начало и конец диапозона №" << i + 1 << ":" << std::endl;
		std::cin >> ranges[i][0];
		std::cin >> ranges[i][1];
		i += 1;
	} while (i < n);
	max = 0;
	k = 0;
	for (i = 0; i < n; i += 1) {
		count = 0;
		for (j = 0; j < n; j += 1) {
			if (ranges[i][0] < ranges[j][0] && ranges[j][1] < ranges[i][1]) {
				count += 1;
			}
		}
		if (max < count) {
			max = count;
			k = i;
		}
	}
	std::cout << "Диапазон содержащий наибольшее количество элементов:" << std::endl;
	std::cout << "[" << ranges[k][0] << ", " << ranges[k][1] << "]" << std::endl;
}
