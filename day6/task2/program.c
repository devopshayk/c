#include <stdio.h>

	int main() {
		const int size = 10;
		int arr[size];

		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		int min = arr[0];

		for(int i = 0; i < size; i++) {
			if(min > arr[i]) {
				min = arr[i];
			}
		}

		printf("%d", min);

		return 0;
	}
