#include <stdio.h>

	int main() {
		
		// Variant 1

		int i = 0;

		while(i <= 10) {
			printf("%d \n", i);
			i++;
		}
		
		// Variant 2

		int j = 10;

		while(j >= 0) {
			printf("%d \n", j);
			j--;	
		}

		return 0;
	}
