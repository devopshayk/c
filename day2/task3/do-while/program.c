#include <stdio.h>

	int main() {
		int i = 0;

		do {
			if(i % 3 == 0 && i % 5 == 0) {
				printf("FizzBuzz \n");
			}

			else if(i % 3 == 0) {
				printf("Fizz \n");
			}

			else if(i % 5 == 0) {
				printf("Buzz \n");
			}

			else {
				printf("%d \n", i);
			}

			i++;

		} while (i < 100);

		return 0;
	}
