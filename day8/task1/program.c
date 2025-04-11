#include <stdio.h>

	double sum(double a, double);

	int main() {
		double a = 0;
		double b = 0;

		printf("Write num for A: ");
		scanf("%lf", &a);

		printf("Write num for B: ");
		scanf("%lf", &b);
		
		double result = sum(a, b);

		printf("Result is --> : %.2lf", result);

		return 0;
	}

	double sum(double a, double b) {
		return a + b;
	} 
