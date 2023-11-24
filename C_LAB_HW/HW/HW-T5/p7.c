#include <stdio.h>

// word count

int main(void) {
	char str[1000];
	int n_word = 0;
	int i;
	
	gets(str);

	for(i=0; str[i] != '\0'; i++) {
		if(str[i]==' '&& ((str[i+1]>='a'&& str[i+1] <= 'z') || (str[i+1] >= 'A' && str[i+1] <= 'Z'))) {
				n_word = n_word + 1;
			}
	}
			
	if (str[0] != ' ') {n_word = n_word + 1;}

	printf("%d\n", n_word);
	return 0;
}