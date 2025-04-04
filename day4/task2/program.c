#include <stdio.h>

	int main() {
		int num = 0;
		int result = 0;

		printf("Write num for: ");
		scanf("%d", &num);
	
		result = num << 1;

		printf("%d", result);

		return 0;
	}
