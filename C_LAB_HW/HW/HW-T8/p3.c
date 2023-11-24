#include <stdio.h>

char * mystrrev(char * str) {
char tmp[20] = {};
int cnt = 0 ;
int i = 0;
for (i = 0; str[i] != '\0'; i++) {
	tmp[i] = str[i];
	cnt ++; 
}
tmp[i] = '\0';

int idx = cnt - 1;

for ( int i = 0 ; i <=idx  ; i++ ) {
	str[idx - i] = tmp[i]; 
}

return str;

}

int main(void) {
	char str[256];
	
	gets(str);
	
	printf("%-20s  : After Reverse >>>\n",str);
	printf("%-20s\n", mystrrev(str));

	return 0;
}