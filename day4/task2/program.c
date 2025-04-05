#include <stdio.h>

	int main() {
		int num = 0;
		int result = 0;

		printf("Write num for grow two-times: ");
		scanf("%d", &num);
	
		result = num << 1;

		printf("%d", result);

		return 0;
	}
