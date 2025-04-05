#include <stdio.h>

	int main() {
		int num = 0;
		int index = 0;

		printf("Write num for transfiguration: ");
		scanf("%d", &num);

		printf("Write index for transfiguration: ");
		scanf("%d", &index);

		int res = num | (1 << index);

		printf("%d", res);

			
	}
