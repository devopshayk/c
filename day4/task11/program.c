#include <stdio.h>

	int main() {
		int num = 0;
		int mask = 0;
		int n = 0;

		printf("Write positive number for op: ");
		scanf("%d", &num);

		printf("Write num for mask: ");
		scanf("%d", &mask);

		printf("Write n-count for LS: ");
		scanf("%d", &n);

		int result = num & (mask << n);

		printf("Result is: %d", result);

		return 0;
	}
