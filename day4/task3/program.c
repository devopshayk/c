#include <stdio.h>

	int main() {
		int num = 0;
		int count = 0;

		printf("Write num for onces sum: ");
		scanf("%d", &num);

		while(num > 0) {		
			if((num & 1) == 1) {
				count++;
			}
			num >>= 1;	
		}
			printf("%d", count);
	}	
