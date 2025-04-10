#include <stdio.h>

	int main() {
		const int size = 5;
		int arr[size];

		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		int max = arr[0];
		int min = arr[0];

		for(int i = 0; i < size; i++) {
			if(max < arr[i]) {
				max = arr[i];
			}

			if(min > arr[i]) {
				min = arr[i];
			}
		}

		int result = max + min;
		printf("%d", result);

		return 0;
	}
