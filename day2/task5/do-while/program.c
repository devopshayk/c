#include <stdio.h>

	int main() {
		int f, i = 0;
		int n = 1;
		
		printf("Write num for calculate factorial: ");
		scanf("%d", &f);

		do {
			n *= f;
			f--;	
		} while(f > i);

		printf("%d", n);

		return 0;
	}
