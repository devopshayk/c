#include <stdio.h>

	int main() {
		char sym = '*';

		char *p = &sym;

		printf("Char's Address before --> %p\n", p);

		p++;

		printf("Char's Address after --> %p", p);

		return 0;
	}
