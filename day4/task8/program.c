#include <stdio.h>

	int main() {
		char sym = ' ';
		int res = 0;

		printf("Write sym for cover-case: ");
		scanf(" %c", &sym);

		res = sym ^ 32;

		printf("%c", res);
	}
