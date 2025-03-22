#include <stdio.h>

	int main() {
		int f = 0;
		int n = 1;

		printf("Write num for calculate fatorial: ");
		scanf("%d", &f);

		for(int i = f; i > 0; i--) {
			n *= i;
		}

		printf("%d", n);

		return 0;
	}
