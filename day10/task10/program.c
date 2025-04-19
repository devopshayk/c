#include <stdio.h>

	int find_min(int arr[], int index, int size, int *min, int *max);

	int main() {
		const int size = 5;
		int arr[size];
		int index = 0;
		
		printf("Write nums for search (MIN-MAX): ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		} 

		int min = arr[0], max = arr[0];
		
		find_min(arr, index, size, &min, &max);
		printf("Max --> %d, Min --> %d", max, min);

		return 0;
	}

	int find_min(int arr[], int index, int size, int *min, int *max) {
		if(index == size) return 0;

		if(*min > arr[index]) *min = arr[index];
		if(*max < arr[index]) *max = arr[index];
		
		return find_min(arr, index + 1, size, min, max);
	}
