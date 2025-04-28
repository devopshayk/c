#include <stdio.h>

	void replace_character(char *str, char old_char, char new_char);

	int main() {
		char o;
		char n;
		char string[10];

		printf("Old character: ");
		scanf(" %c", &o);

		printf("New character: ");
		scanf(" %c", &n);

		printf("Write text: ");
		scanf("%s", string);

		replace_character(string, o, n);

		return 0;
	}

	void replace_character(char *str, char old_char, char new_char) {
		int i = 0;

		while(str[i] != '\0') {
			if(str[i] == old_char) str[i] = new_char;
			i++;
		}

		printf("Result is --> %s", str);
	}
