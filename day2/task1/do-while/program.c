#include <stdio.h>

	int main() {
		
		// Variant 1
			
		int i = 0;

		do {
			printf("%d \n", i);
			i++;
		} while(i <= 10);

		// Variant 2
		
		int j = 10;

		do {
			printf("%d \n", j);
			j--;
		} while(j >= 0);

		return 0;

	}

