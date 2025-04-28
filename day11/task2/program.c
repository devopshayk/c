#include <stdio.h>

	void reverse_string(char *str);
	
	int main() {
		char string[100];

		printf("Write text for reversing: ");
		fgets(string, sizeof(string), stdin);

		reverse_string(string);

		return 0;
	}

	void reverse_string(char *str) {
		int count = 0;

		while(str[count] != '\0') count++;
		
		for(int i = count - 1; i >= 0; i--) {
			printf("%c", str[i]);
		}
	}
