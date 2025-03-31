#include <stdio.h>

	int main() {
    		int num, digit, reversed = 0;

    		printf("Write num for reverse: ");
    		scanf("%d", &num);

    
   		for(; num != 0; num /= 10) {
        		digit = num % 10;
        		reversed = reversed * 10 + digit;
    		}	

   		printf("Reversed num is:  %d\n", reversed);

    		return 0;
	}

