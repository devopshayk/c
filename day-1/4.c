#include <stdio.h>

	int main() {
		int length, width, area;

		printf("Enter the length and width: ");
		scanf("%d %d", &length, &width);

		area = length * width;
		printf("Area: %d\n", area);

		return 0;
	}
