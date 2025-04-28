#include <stdio.h>

	int compare_strings(const char *str1, const char *str2);

	int main() {
		char string1[100];
		char string2[100];

		printf("Write string-1 for compare: ");
		scanf("%s", string1);

		printf("Write string-2 for compare: ");
		scanf("%s", string2);

		int result = compare_strings(string1, string2);

		printf("%d", result);

		return 0;
	}
	
	int compare_strings(const char *str1, const char *str2) {
		int i = 0;
		
		while(str1[i] != '\0' && str2[i] != '\0') {
			if(str1[i] != str2[i]) return -1;
			i++;
		}

		if(str1[i] == '\0' && str2[i] == '\0') return 0;
		else return -1;
	
	}
	
