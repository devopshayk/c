#include <stdio.h>

	int main() {
		int num = 0;

		printf("Write num for check odd or even: ");
		scanf("%d", &num);

		if(0 == (num & 1)) printf("Num is even %d: ", num);
		else printf("Num is odd %d: ", num);

		return 0;
	}
