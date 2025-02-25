# C/C++ Programming Tasks  

## Example Task: Convert Lowercase to Uppercase  

## Files  
- **program.c** – Task 1  

### Code  

```c
#include <stdio.h>

int main() {
    char x;

    printf("Write a lowercase letter: ");
    scanf("%c", &x);

    printf("Convert it to uppercase: %c \n", x - 32);

    return 0;
}
```
## How to Compile and Run  

### Compile and Run Individually  
```sh
gcc program.c -o 1.out && ./1.out
```