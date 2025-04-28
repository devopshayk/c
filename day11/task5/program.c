#include <stdio.h>

	int find_character(const char *str, char c);

	int main() {
		char i;
		char string[10];

		printf("Write sym for seacrh index: ");
		scanf(" %c", &i);

		printf("Write text: ");
		scanf("%s", string);

		int result = find_character(string, i);

		printf("Index --> %d", result);
		
		return 0;
	}

	int find_character(const char *str, char c) {
		int i = 0;

		while(str[i] != '\0') {
			if(str[i] == c) return i;
			i++;
		}
	}
