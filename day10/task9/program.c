#include <stdio.h>

	char upper_char(char *, int index);

	int main() {
		char str[50];
		int index = 0;
		
		printf("Searching first upper letter: ");
		scanf("%s", str);
		
		printf("First upper letter is --> %c", upper_char(str, index));

		return 0;
	}

	char upper_char(char *str, int index) {
		if(str[index] == '\0') return 0;
		
		if(str[index] >= 'A' && str[index] <= 'Z') {
			return str[index];
		}

		return upper_char(str, index + 1);
	}
