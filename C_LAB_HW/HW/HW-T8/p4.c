#include <stdio.h>

char *mystrstr(char *str, char *substr) {
	int len = 0 ,n;
	if(*substr == 0) {
		return str;
	}
	while (*substr ) {
		*substr++;
		len++;
	}

	for ( int i = 0; i <len ; i++) {
		*substr--;
	}
	while (*str) {
		if(*str == *substr && len == 1) {
			return str;
		}
		
		else if (*str == *substr && len != 1) {
			for ( int i = 0; i < len ; i++) {
				if (*str++ == *substr++) n =1;
				else n = 0;
			}
			if (n == 1) return str - len;
		}
		*str++;
	}
	return 0;
}

void find_str(char * str, char * substr) {
	char* pos = mystrstr(str, substr);
	if(pos) 
		printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
	else
		printf("the string '%s' was not found in '%s'\n", substr, str);
}
 
int main(void) {
	char* str = "one two three";
	find_str(str, "two");
	find_str(str, "");
	find_str(str, "nine");
	find_str(str, "n");

	return 0;
}