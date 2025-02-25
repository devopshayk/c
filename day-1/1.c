#include <stdio.h>

	int main() {
		char x;

		printf("Write a lowercase letter: ");
		scanf("%c", &x);

		printf("Convert it to uppercase: %c \n", x - 32);

		return 0;
	}
