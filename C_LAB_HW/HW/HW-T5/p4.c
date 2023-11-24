#include <stdio.h>

// hexa to decimal (matna...)

int main(void)
{
	char str[11];
	unsigned int num=0;	// number
	int i; // index

	scanf("%s",str);

	for(i=0; str[i]; i++) {

		char temp[11];
		temp[i] = str[i];
		temp[i] = temp[i] - '0';
		num = num * 10 + temp[i];


	}

	printf("[%s] is %d\n",str,num);
	
	return 0;
}