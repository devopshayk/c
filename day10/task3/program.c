#include <stdio.h>

	void n_1(int n);

	int main() {
		int n = 0;

		printf("Write num for N (n-0): ");
		scanf("%d", &n);

		printf("Result is --> ");
		n_1(n);

		return 0;
	}

	void n_1(int n) {
		if(n == 0) return;

		printf("%d ", n);
		n_1(n - 1);
	}
