#include <stdio.h>

	int main() {
		int *p = NULL;
		if(p == NULL) printf("Pointer is null: %p\n", p);
		
		int x = 55;
		p = &x;

		printf("Value in P (Dereference): %d", *p);

		return 0;
	}
