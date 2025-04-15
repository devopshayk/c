#include <stdio.h>

	int is_prime(int n) {
    		if (n <= 1) return 0;
    		
		for (int i = 2; i * i <= n; i++) {
        		if (n % i == 0) return 0;
    		}
    		
		return 1;
	}

	int sum_two_primes(int n) {
    		if (n < 4) return 0;
    		
		for (int i = 2; i <= n / 2; i++) {
        		if (is_prime(i) && is_prime(n - i)) {
            			return 1;
        		}
    		}
   		
	       	return 0;
	}

	int main() {
    		int num;
    		
		printf("Enter a number: ");
    		scanf("%d", &num);

    		if (sum_two_primes(num)) {
        		printf("%d Yes.\n", num);
    		} else {
        		printf("%d No.\n", num);
    		}

    		return 0;
	}

