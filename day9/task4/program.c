#include <stdio.h>

	int sum_digits();

	int main() {
		int n = 0;

		printf("Write num for sum digits: ");
		scanf("%d", &n);

		int result = sum_digits(n);

		printf("%d", result);

		return 0;
	}

	int sum_digits(int n) {
		int result = 0;
		int sum = 0;

		while(n != 0) {
			result = n % 10;
			sum += result;
			n /= 10;
		}

		return sum;
	}
