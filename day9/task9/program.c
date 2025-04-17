#include <stdio.h>

	char to_hex(int digit);

	int main() {
                int n = 0;
                scanf("%d", &n);

                char result = to_hex(n);
                printf("%c", result);

                return 0;
        }

	char to_hex(int digit) {
    		if (digit >= 0 && digit <= 15) {
        		if (digit < 10) {
            			return '0' + digit;
        		} else {
            			return 'A' + (digit - 10);
        		}

    		} else {
        		return 0;
    		}
	}
