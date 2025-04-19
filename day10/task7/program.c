#include <stdio.h>
	
	int sum_d(int n);

	int main() {
		int n = 0;
		
		printf("Write num for sum digits: ");
		scanf("%d", &n);

		int res = sum_d(n);

		printf("Result is --> %d", res);

		return 0;
	}

	int sum_d(int n) {
		if(n < 10) return n;

		return (n % 10) + sum_d(n / 10);
	}
