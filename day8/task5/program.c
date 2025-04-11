#include <stdio.h>

	int _max(int a, int b);

	int main() {
		int a = 0;
		int b = 0;

		printf("Write nums for comparision: \n");

		printf("Write num for A: ");
		scanf("%d", &a);

		printf("Write num for B: ");
		scanf("%d", &b);

		int result = _max(a, b);

		printf("Result is --> %d", result);

		return 0;
	}

	int _max(int a, int b) {
		if(a > b) return a;
		else return b;
	}
