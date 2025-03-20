#include <stdio.h>

	int main() {
		int a, b = 0;

		printf("Write start-range for A: ");
		scanf("%d", &a);

		printf("Write end-range for B: ");
		scanf("%d", &b);

		for(int i = a; i <= b; i++) {
			if(i % 5 == 0) {
				printf("%d \n", i);
			}
		}

		return 0;

	}
