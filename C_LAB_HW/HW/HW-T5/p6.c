#include <stdio.h> 

// int to ascii

int main(void)
{
	int i;		// index

	unsigned int num=0;	// number
	unsigned int nd, len;
	char str[11];       // Max Digits + 1
	char rstr[11];      // Max Digits + 1

	scanf("%d",&num);
 
nd = num;	
len = 0;
for (int j =0; nd !=0 ; j++){
	
	rstr[j] = (nd % 10) + '0'; 
	nd = nd / 10;
	len = len + 1;

	}

for (i=len -1; i>=0; i--){
	str[len-1-i] = rstr[i];
}
str[len] = '\0';

	printf("%d is [%s]\n",num, str);
	return 0;
}
