#include <stdio.h>

	int fib(int n);

	int main() {
		int n = 0;
		
		printf("Write num for fib: ");
		scanf("%d", &n);

		int res = fib(n);
		printf("result is --> %d", res);

		return 0;		
	}

	int fib(int n) {
		if(n == 0 || n == 1) return n;
		
		return fib(n - 1) + fib(n - 2);
	}
