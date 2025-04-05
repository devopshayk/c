#include <stdio.h>

	int main() {
		int a = 0;
		int b = 0;

		printf("Write num for A (swaping): ");
		scanf("%d", &a);

		printf("Write num for B (swaping): ");
		scanf("%d", &b);

		int c = a ^ b;
		a = c ^ a;
		b = c ^ b;

		printf("A --> %d, B --> %d", a, b);
	}
