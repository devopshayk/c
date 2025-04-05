#include <stdio.h>

	int main() {
		int a = 111;
		int *p = &a;

		printf("Adress A -->  %p\nPointer's Value --> %p\nA's Value --> %d", &a, p, *p);

		return 0;
	}
