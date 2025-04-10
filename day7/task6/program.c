#include <stdio.h>

	int main() {
		const int size = 10;
		int arr[size];

		int target = 0;
	
		printf("Write nums for arr: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		printf("Write num for target: ");
		scanf("%d", &target);

		for(int i = 0; i < size; i++) {
			if(arr[i] == target) printf("Index of target --> %d\n", i);
		}
		
		printf("Element not found");

		return 0;
	}

