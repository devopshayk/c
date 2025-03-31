#include <stdio.h>

	int main() {
    		int num = 0;
    		int lengthNum = 1;

		printf("Write num for print: ");
    		scanf("%d", &num);

    		int tmp = num;
   		while (tmp >= 10) {  
        		lengthNum *= 10;
        		tmp /= 10;
    		}

    		do {  
        		printf("%d", num / lengthNum);
        		num %= lengthNum;
        		lengthNum /= 10;
    		} while (lengthNum > 0);  

    		return 0;
}

