#include <stdio.h>

	int main() {
		int num = 0;
		int index = 0;

		printf("tiv gri:: ");
		scanf("%d", &num);

		printf("index gri: ");
		scanf("%d", &index);

		int res = num | (1 << index);

		printf("%d", res);

			
	}
