#include <stdio.h>

	int string_length(const char *str);

	int main() {
		char string[100];
		
		printf("Write text for sum-lenght: ");
		scanf("%s", string);

		int result = string_length(string);

		printf("Length is --> %d", result);

		return 0;
	}

	int string_length(const char *str) {
		int count = 0;
		
		while(str[count] != '\0') { 
			 count++;
		}

		return count;
	}
        
