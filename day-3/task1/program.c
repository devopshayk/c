#include <stdio.h>

	int main() {
		int num = 0;
		int sum = 0;

		printf("Write num for stugum: ");
		scanf("%d", &num);

		for(int i = 1; i < num; i++) {
			if(num % i == 0) {
				sum += i;
			}	
		}

		if (sum == num) printf("Yes");
		else printf("No");
	}
