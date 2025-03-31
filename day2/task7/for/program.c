#include <stdio.h>

	int main() {
    		int num = 0;

		printf("Write num for print: ");
    		scanf("%d", &num);

    		int lengthNum = 1;
    
    		for (int tmp = num; tmp >= 10; tmp /= 10) {
        		lengthNum *= 10;
   		 }

 
   		for (; lengthNum > 0; lengthNum /= 10) {
        		printf("%d", num / lengthNum);
        		num %= lengthNum;
    		}

    		return 0;
}

