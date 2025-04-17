#include <stdio.h>

	void printBinary(int n);

	int main() {
    		int num = 0;
    		printf("Enter a number: ");
    		scanf("%d", &num);

    		printf("Binary representation: ");
    		printBinary(num);

    		printf("\n");

    		return 0;
	}

	void printBinary(int n) {
    		if (n == 0) {
        		printf("0");
        		return;
    		}

    		int binary[32];
    		int i = 0;

    		while (n > 0) {
        		binary[i] = n % 2;
        		n = n / 2;
        		i++;
    		}

    		for (int j = i - 1; j >= 0; j--) {
        		printf("%d", binary[j]);
    		}
	}

