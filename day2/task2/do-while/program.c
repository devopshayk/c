#include <stdio.h>

	int main() {
		int a, b = 0;

		printf("Write start-range for A: ");
		scanf("%d", &a);

		printf("Write start-range for B: ");
		scanf("%d", &b);

		do {
			a++;
			if(a % 5 == 0) {
				printf("%d \n", a);
			}
			
		} while (a < b);

		return 0;
	}
