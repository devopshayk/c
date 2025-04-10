#include <stdio.h>

	int main() {
		const int size = 10;
		int arr[size];

		int count = 0;

		printf("Write nums for array: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		for(int i = 0; i < size; i++) {
			if(arr[i] % 2 != 0) {
				count++;
			}			
		}
		
		printf("Counts of odd numbers --> %d\n", count);

		return 0;
	}
