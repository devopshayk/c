#include <stdio.h>


	int main() {
		const int size = 10;
		int arr[size];
		
		printf("Write nums for array: ");	
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		printf("Evens to start - odds to end: ");
		for(int i = 0; i < size; i++) {
			for(int j = i + 1; j < size; j++) {
				if(arr[i] % 2 == 1 && arr[j] % 2 == 0) {
					int tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
				
			printf("%d ", arr[i]);
		}
			return 0;
	}
