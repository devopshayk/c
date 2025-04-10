#include <stdio.h>

	int main() {
		const int size = 5;
		int arr[size];

		int target = 0;

		printf("Write nums for array: ");
		for(int i = 0 ; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		for(int i = 0; i < size; i++) {
			target ^= arr[i];
		}

		printf("Unique element --> %d", target);

		return 0;
	}
