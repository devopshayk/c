#include <stdio.h>

	int main() {
		int num = 0;
		int count = 0;

		printf("Write num for check 2i astichan:");
		scanf("%d", &num);

		while(num > 0) {
			if((num & 1) == 1) {
				count++;
			}
			num >>= 1;
		}
			
		if(count == 1) printf("Yes");
		else printf("No");

		return 0;
	}
