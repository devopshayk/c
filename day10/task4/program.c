#include <stdio.h>

	void d_n(int n);

	int main() {
		int n = 0;

		printf("Write num for N (1-n): ");
		scanf("%d", &n);

		printf("Result is --> ");
		d_n(n);

		return 0;
	}

	void d_n(int n) {
		if(n == 0) return;

		d_n(n - 1);
		printf("%d ", n);
	}

