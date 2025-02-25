#include <stdio.h>

	int main() {
		char x;

		printf("Write a uppercase letter: ");
		scanf("%c", &x);

		printf("Convert it to lowercase: %c\n", x + 32);

		return 0;
	}
