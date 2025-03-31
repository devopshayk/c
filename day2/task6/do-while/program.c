#include <stdio.h>

	int main() {
		int num, digit, reverse = 0;

		printf("Write num for reverse: ");
		scanf("%d", &num);

		do {
			digit = num % 10;
			reverse = reverse * 10 + digit;
			num /= 10;
		} while (num != 0);

		printf("Reversed num is : %d", reverse);
	}

