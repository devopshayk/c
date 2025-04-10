#include <stdio.h>

	int main() {
		const int size = 5;
		int arr[size];

		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		int min = arr[0];
		int min_index = 0;

		for(int i = 0; i < size; i++) {
			if(min > arr[i]) {
				min = arr[i];
				min_index = i;
			}
		}

		printf("%d", min_index);
		
		return 0;
	}
