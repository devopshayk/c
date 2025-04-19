#include <stdio.h>
	int res = 0;	

	int sum_d(int n);

	int main() {
		int num = 0;

		printf("Write num for sum digit: ");
		scanf("%d", &num);

		int res = sum_d(num);

		printf("Result is --> %d", res);

		return 0;
	}

	int sum_d(int n) {
		if(n >= 10)
		{
			int digit = n % 10;
			res = sum_d(n / 10);

			return digit * res;
		}

		return n;

	}
