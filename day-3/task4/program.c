#include <stdio.h>

	int main() {
		char sym = '*';
		int num = 0;

		printf("Write num for square: ");
		scanf("%d", &num);

		for(int i = 1; i <= num; i++) {
			for(int j = 1; j <= num; j++) {
				printf("%c", sym);
			}
			printf("\n");
		}
	}
