void sortBin(int *A, int length) {
	int i, j, k, temp, increment = 0;
	for (i = 0; i < length; ++increment, i += increment) {
		for (j = i; j < i + increment; ++j) {
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
}
