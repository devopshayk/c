#include <stdio.h>

	int main() {	
		int num = 0;
		int count = 1;

		printf("Write num for pattern trigle: ");
		scanf("%d", &num);

		for(int i = 1; i < num; i++) {
			for(int j = 1 ; j <= i; j++) {
				printf("%d", count);
				count++;
			}
			printf("\n");
		}
	}
