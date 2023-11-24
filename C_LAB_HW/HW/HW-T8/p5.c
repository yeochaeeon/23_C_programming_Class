#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int ispalindrome(char *str) {
	
	char temp[100] = {};
	int idx = 0; 
	
	for (int i = 0; str[i] != '\0';i++) {
		if( isdigit(str[i]) > 0 ) {
			temp[idx] = str[i];
			idx++;
		}
		
		else if (isalpha(str[i]) > 0) {
			if(isupper(str[i]) > 0 ) { 
				temp[idx] = tolower(str[i]);
				idx++;
			}
			else { 
				temp[idx] = str[i];
				idx++;
			}
		}
	}
	// for (int i =0; str[i] != '\0'; i++){
	// 	printf("%c", temp[i]);
	// }
	// printf("\n");
		
	temp[idx] = '\0';
	
	char rvtemp[100] = {};
	
	for(int i = 0; temp[i] != '\0'; i++ ) {
		rvtemp[idx-i-1] = temp[i];
	}
	rvtemp [idx] = '\0';
	
	// for ( int i = 0; i<= idx; i++) {
	// 	printf("%c", rvtemp[i]);
	// }
	// printf("\n");
	
	for( int i =0; i <idx ; i++) {
		if(rvtemp[i] != temp[i]) {
			return 0;
		}
	}

	

	return 1;
}
int main(void) {
	char buffer[1024];

	gets(buffer);
	printf("[%s] is ", buffer);
	if (ispalindrome(buffer)) puts("a palindrome");
	else puts("not a palindrome");
	
	return 0;
}