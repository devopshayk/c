#include <stdio.h>

	void count_vowels_and_consonants(const char *str, int *vowels, int *consonants);


	int main() {
		char string[10];

		int v = 0;
		int c = 0;

		printf("Write text for check: ");
		scanf("%s", string);

		count_vowels_and_consonants(string, &v, &c);

		return 0;
	}

	void count_vowels_and_consonants(const char *str, int *vowels, int *consonants) {
		while(*str != '\0') {
			if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o') (*vowels)++;
			else (*consonants)++;

			str++;
		}

		printf("Vuwels --> %d, Cons --> %d", *vowels, *consonants);
	}
