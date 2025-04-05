#include <stdio.h>

	int main() {
		char sym = ' ';
		int res = 0;

		printf("Write sym for convert-case(A-a): ");
		scanf(" %c", &sym);

		res = sym ^ 32;

		printf("%c", res);
	}
