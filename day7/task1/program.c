#include <stdio.h>

	int main() {
		const int size = 5;
		char arr[size];
		int result = 0;

		for(int i = 0; i < 5; i++) {
			scanf(" %c", &arr[i]);
		}

		for(int i = 0; i < 5; i++) {
			result = arr[i] ^ 32;
			printf("%c ", result);
		}
		
		return 0;
	}
