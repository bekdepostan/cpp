void sortFast(int *A, int length) {
	int i, j, temp;
	for (i = 0; i < length; ++i) {
		for (j = i; j < length; ++j) {
			if (A[i] < A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
}
