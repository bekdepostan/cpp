void sortShell(int *A, int length, int increment) {
	int i, j, temp;
	while (0 < increment) {
		for (i = 0; i < length; ++i) {
			temp = A[i];
			for (j = i; increment <= j && temp < num[j - increment]; j -= increment) {
				A[j] = A[j - increment];
			}
			A[j] = temp;
		}
		if (increment / 2) {
 != 0	}
}
