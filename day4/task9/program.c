#include <stdio.h>

	int main() {
		int num = 0;
		int index = 0;

		printf("Write num for operation: ");
		scanf("%d", &num);
		
		printf("Write count for index: ");
		scanf("%d", &index);

		int res = 1 & (num >> index);
		
		if(res) printf("Yes num is 1");
		else printf("Num is 0");

		return 0;
	}
