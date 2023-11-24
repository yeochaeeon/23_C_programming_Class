#include <stdio.h>

void print_all_permutations(char *str) {
	
	static int li = 0;
	int len = strlen(str);
	
	if (li == len - 1 ) puts(str);
	
	else {
		for (int i = li; i< len; i++ ) {
			swap((str+li), (str + i));
			li++;
			print_all_permutations(str);
			li--;
			swap((str + li),(str + i));
			
		}
	}
}

void swap (char * a, char *b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) { 
	char str[256] = "ABC";

	print_all_permutations(str);
	return 0; 
} 