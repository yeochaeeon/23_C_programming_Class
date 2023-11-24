#include <stdio.h> 

// check if it is alphabet or not
/**
* @brief : Checks if the given character is an alphabetic character
* @return: Non-zero value if the character is an alphabetic character, zero otherwise
* @param : ch - character to check
*/
int is_alpha(char ch) {
if ((ch >= 'A' && ch <= 'Z') || (ch >='a' && ch >= 'z')) return 1; 
else return 0;
	

}
/**
* @brief : Checks if the given character is an uppercase alphabetic character
* @return: Non-zero value if the character is an uppercase, zero otherwise
* @param : ch - character to check
*/
int is_upper(char ch) {
if (ch >= 'A' && ch <= 'Z') return 1;
else return 0;

}
int main(void) {
	char ch;

	scanf("%c", &ch);
	printf("%c is ", ch);
	if (is_alpha(ch)) {
		if (is_upper(ch))
			printf("an uppercase alphabetic character\n");
		else
			printf("a lowercase alphabetic character\n");
	}
	else
		printf("is not an alphabetic character\n");

	return 0;
}