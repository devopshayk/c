#include <stdio.h>

	int main() {
		int a, b = 0;

		printf("Write start-range for A: ");
		scanf("%d", &a);

		printf("Write end-range for B: ");
		scanf("%d", &b);

		while(a < b) {
			a++;
			if(a % 5 == 0) {
				printf("%d \n", a);
			}
		}
		
		return 0;
	
	}
