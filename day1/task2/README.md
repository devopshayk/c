# C/C++ Programming Tasks  

## Example Task: Convert Uppercase to Lowercase  

## Files  
- **program.c** – Task 2  

### Code  

```c
#include <stdio.h>

	int main() {
		char x;

		printf("Write a uppercase letter: ");
		scanf("%c", &x);

		printf("Convert it to lowercase: %c\n", x + 32);

		return 0;
	}
```
## How to Compile and Run  

### Compile and Run Individually  
```sh
gcc program.c -o 1.out && ./1.out
```
