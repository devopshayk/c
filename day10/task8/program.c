#include <stdio.h>

	void to_bin(int n);

	int main() {
    		int n = 0;
 	   	
		printf("Write num for binary rep: ");
    		scanf("%d", &n);
		
		printf("Result is --> : ");
    		if (n == 0) printf("0"); 
  		else  to_bin(n);

    		return 0;
	}

	void to_bin(int n) {
 	   	if (n > 1) to_bin(n / 2);
    
    		printf("%d", n % 2);
	}
