# C/C++ Programming Tasks  

## Example Task: Rectangle Area  

## Files  
- **program.c** – Task 4

### Code  

```c
#include <stdio.h>

	int main() {
		int length, width, area;

		printf("Enter the length and width: ");
		scanf("%d %d", &length, &width);

		area = length * width;
		printf("Area: %d\n", area);

		return 0;
	}

```
## How to Compile and Run  

### Compile and Run Individually  
```sh
gcc program.c -o 1.out && ./1.out
```
