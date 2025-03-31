#include <stdio.h>

	int main() {
		int num, digit, reverse = 0;

		printf("Write num for reverse: ");
		scanf("%d", &num);

		while(num != 0) {
			digit = num % 10;
			reverse = reverse * 10 + digit;
			num /= 10;
		}	

		printf("Reversed num is: %d", reverse);

		return 0
	}
