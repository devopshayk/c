#include <stdio.h>

	int main() {
		int a = 5;
	        int b = 7;
		
		printf("B's Value before --> %d\n", b);

		int *p = &b;
		*p = 11;

		printf("B's Value after --> %d", b);
		
		return 0;	
	}
