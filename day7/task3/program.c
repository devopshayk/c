#include <stdio.h>

	int main() {
		const int size = 5;
		char arr[size];

		for(int i = 0; i < size; i++) {
			scanf(" %c", &arr[i]);
		}
		
		printf("Reversed version: ");
		for(int i = size; i >= 0; i--) {
			printf("%c ", arr[i]);
		}

		return 0;
	}
