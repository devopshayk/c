#include <stdio.h>

	int main() {
		int num = 0;

		printf("Write num for pattern trigle: ");
		scanf("%d", &num);

		for(int i = 1; i <= num; i++) {
			for(int j = 0; j < i; j++) {
				printf("%d", i);
			}
			printf("\n");
		} 

		return 0;
	}
