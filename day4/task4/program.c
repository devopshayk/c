#include <stdio.h>

	int main() {
		int num = 0;
		int count = 0;

		printf("Write num for: ");
		scanf("%d", &num);

		while(num > 0) {
			if((num & 1) == 1) {
				count++;
			}

			num >>= 1;
		}

		if(count % 2) printf("Kent e: %d", count);
		else printf("Zuyg e: %d", count);
	}
