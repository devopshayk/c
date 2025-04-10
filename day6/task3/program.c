#include <stdio.h>

	int main() {
		const int size = 5;
		int arr[size];

		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		int max = arr[0];
		int max_index = 0;

		for(int i = 0; i < size; i++) {
			if(max < arr[i]) {
				max = arr[i];
				max_index = i;
			}

		}

		printf("%d", max_index);

		return 0;
	}
