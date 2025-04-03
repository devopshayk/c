#include <stdio.h>

	int main() {
   		int num = 0;
    
    		printf("Write num for trigle size: ");
    		scanf("%d", &num);

    
    		for (int i = 1; i <= num; i++) {
       
        		for (int j = 1; j <= num - i; j++) {
            			printf("  ");
        		}
        
        		for (int j = 1; j <= 2 * i - 1; j++) {
            			if (j == 1 || j == 2 * i - 1 || i == num) {
                			printf("* ");
            			} else {
                			printf("  ");
            			}
        		}

        		printf("\n");
    		}

    			return 0;
	}

