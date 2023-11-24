#include <stdio.h>

// to uppercase

int main(void) {
	char msg[] = "^^ \tThis is a Test Message 2022 !!\n Thank You !!!";
	int i;
	
	printf("%s\n", msg);
	
	for (i=0; msg[i] != '\0'; i++) {
	if(msg[i] >= 'a' && msg[i] <='z')  msg[i] = msg[i] - 32;

	}
	
	printf("%s\n", msg);
	return 0;
}
