#include <stdio.h>

	int main() {
		int a = 3;
		int b = 5;
		int *tmp = &a;
		
		printf("Before Values for A --> %d and B --> %d\n", a, b);

		int p = *tmp;
		a = b;
		b = p;

		printf("After Values for A --> %d and B --> %d", a, b);

		return 0;
	}
