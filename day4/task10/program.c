#include <stdio.h>

	int main() {
		int num = 0;
		int n = 0;

		printf("Write num for MUL and DIV operations: ");
		scanf("%d", &num);

		printf("Power Count: ");
		scanf("%d", &n);

		int mul = num << n;
		int div = num >> n;

		printf("Num: %d, %d ÷ %d = %d, %d × %d = %d\n", num, n, div, mul, n, div, mul);


		return 0;

	}
