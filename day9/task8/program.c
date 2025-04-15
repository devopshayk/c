#include <stdio.h>

	int reversed_num(int num);

	int main() {
		int num = 0;

		printf("Write num for reverse: ");
		scanf("%d", &num);

		int result = reversed_num(num);

		printf("Resversed num --> %d", result);

		return 0;
	}

	int reversed_num(int num) {
		int res = 0;
		int digit = 1;
		int sum = 0;
		int tmp = num;

		while(num >= 10) {
			num /= 10;
			digit *= 10;
		}

		while(tmp != 0) {
			res = tmp % 10;
			sum += res * digit;
			digit /= 10;
			tmp /= 10;
		}

		return sum;
	}
