#include <stdio.h>

	int square(int a);

	int main() {
		int a = 0;

		printf("Write num for sum square: ");
		scanf("%d", &a);

		int result = square(a);

		printf("Result is --> %d", result);

		return 0;
	}

	int square(int a) {
		a = a * a;

		int result = a;

		return result;
	} 
