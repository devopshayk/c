#include <stdio.h>

	void arr(int arx[], int index, int size);

	int main() {
		const int size = 5;
		int arx[size];

		int index = 0;
		
		printf("Write nums for array: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arx[i]);
		}

		printf("Result is --> ");
		arr(arx, index, size);

		return 0;
	}

	void arr(int arx[], int index, int size) {
		if(index >= size) return;

		arr(arx, index + 1, size);
		printf("%d", arx[index]);
	}
