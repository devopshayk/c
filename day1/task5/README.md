# C/C++ Programming Tasks  

## Example Task: Convert Celsius to Fahrenheit 

## Files  
- **program.c** – Task 5

### Code  

```c
#include <stdio.h>

	int main() {
		double C, F;

		printf("Write  temperature in Celsius: ");
		scanf("%lf", &C);

		F = (C * 9/5) + 32;
		printf("Temperature in Fahrenheit: %.2lf\n", F);

		return 0;
	}
```
## How to Compile and Run  

### Compile and Run Individually  
```sh
gcc program.c -o 1.out && ./1.out
```
