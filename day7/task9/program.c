#include <stdio.h>

	int main() {
		int N = 0;

		printf("Write num for N: ");
		scanf("%d", &N);

		int size = N - 1;
		int arr[size];
		
		int sum = 0;
		int sum_N = 0;

		printf("Write nums for array in range 1 - %d (except one): ", N);
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		for(int i = N; i >= 1; i--) {
                        sum_N += i;
                }

		for(int i = 0; i < size; i++) {
			sum += arr[i];
		}

		int result = sum_N - sum;
		
		printf("Missed element --> %d", result);

		return 0;
	}
