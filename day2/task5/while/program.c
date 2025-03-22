#include <stdio.h>

	int main() {
		int f, i = 0;
		int n = 1;

		printf("Write num for calculate factorial: ");
		scanf("%d", &f);

		while(f > i) {
			n *= f;
			f--;
		} printf("%d", n);

		return 0;
	}
