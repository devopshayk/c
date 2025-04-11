#include <stdio.h>

	float _sum(float a, float b);

	int main() {
		float a = 0;
		float b = 0;

		printf("Write num for A: ");
		scanf("%f", &a);
	
		printf("Write num for B: ");
		scanf("%f", &b);

		float result = _sum(a, b);

		printf("Result is --> %.2f", result);

		return 0;
	}


	float _sum(float a, float b) {
		return a + b;
	}
