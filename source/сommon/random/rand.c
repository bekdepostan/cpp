#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j;
	for(i = 0; i < 10; i += 1) {
		srand(i);
		for(j = 0; j < 10; j += 1) {
			printf("%i\n", rand());
		}
	}
}
