#include <stdio.h>

	int main() {
		char sym = '*';
		int num = 0;

		printf("Write num count for square: ");
		scanf("%d", &num);

		for(int i = 1; i <= num; i++) {
			for(int j = 1; j <= num; j++) {
				if(i == 1 || i == num || j == 1 || j == num) {
					printf("%c", sym);
				} else printf(" ");
			}

			printf("\n");
		}
	}
