#include <stdio.h>
#include <string.h>

	int main() {
		int num1 = 0;
		int num2 = 0;

		printf("Write nums for bw operations: ");
		scanf("%d %d", &num1, &num2);

		char bw[3] = " ";

		printf("Write operator: ");
		scanf(" %2s", bw);

		unsigned int result = 0;

		if (strcmp(bw, "&") == 0) {
			result = num1 & num2;	
		}

		else if (strcmp(bw, "|") == 0) {
			result = num1 | num2;
		}

		else if (strcmp(bw, "^") == 0) {
			result = num1 ^ num2;
		}

		else if (strcmp(bw, "<<") == 0) {
			result = num1 << num2;
		}

		else if (strcmp(bw, ">>") == 0) {
			result = num1 >> num2;
		}

		printf("Result is %i", result);

		return 0;
	}
