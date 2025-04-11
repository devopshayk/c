#include <stdio.h>

	int sign(int a);

	int main() {
		int a = 0;

		printf("Write num for check sign num: ");
		scanf("%d", &a);

		int result = sign(a);

		printf("Result is --> %d", result);

		return 0;
	}

	int sign(int a) {
		if(a >= 0) return 1;
		else return 0;
	}
