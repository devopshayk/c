#include <stdio.h>

	int main() {
		const int size = 5;
		int arr[size];
		int count = 0;

		printf("Write nums for arr: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		for(int i = 0; i < size; i++) {
			if(arr[i] >= arr[i + 1]) {
				count++;
			}
		}
		
		if(count == size) printf("Yes\n");
		else printf("No");
		
	}
