// Последовательности 2.
// Имеется последовательность, состоящая из N действительных чисел, и целое число M < N. Найти целое число К, лежащая в диапазоне от N до N - M, такое что сумма чисел x[k] + ... + x[k + M] ближе всего к нулю.
#include <iostream>
#include <cmath>
int main() {
	int m, n, k, i, j, r, sum;
	std::cout << "Введите чисело m:" << std::endl;
	std::cin >> m;
	std::cout << "Введите количество чисел:" << std::endl;
	std::cin >> n;
	float sequence[n];
	for (i = 0; i < n; i += 1) {
		std::cout << "Введите значение элемента №" << i + 1 << ":" << std::endl;
		std::cin >> sequence[i];
	}
	k = sequence[i];
	r = 0;
	for (j = k; j < k + m + 1; j += 1) {
		r += sequence[j];
	}
	for (i = n + 1; i < n - m + 1; i += 1) {
		sum = 0;
		for (j = k; j < k + m + 1; j += 1) {
			sum += sequence[j];
		}
		sum = std::abs(sum);
		if (sum < r) {
			r = sum;
			k = sequence[i];
		}
	}
	std::cout << "Число k:" << std::endl;
	std::cout << k << std::endl;
}
