#include <stdio.h>

int mystrlen(char *str) {
	int cnt = 0;
	for (int i = 0; str[i] != '\0';i++){
		cnt ++;
	}
	
	return cnt;
}

char *mystrcpy(char *dest, char *src) {
	int i = 0;	
	for(i = 0; src[i] != '\0'; i++){
		dest[i] = src[i];  
	}
	dest[i] = '\0';


	return dest;
}

int mystrcmp(char *lhs, char *rhs) {
int i = 0;	
while(lhs[i] == rhs[i]) {
	if(lhs[i] == '\0') return 0;	
	i++; 
		
	} 
	if (lhs[i] < rhs[i]) return -1;
	else return 1;

}


int main(void) {
	char str1[256] = "Hello World !!!\n Good Day !!!";
	char str2[256] = "Hello PNU CSE !!!";
	char str3[256];
	
	printf("mystrlen(str1) = %d, mystrlen(str2) = %d\n",
				mystrlen(str1), mystrlen(str2));
	
	printf("mystrcpy(str3,str1) = %s\n", mystrcpy(str3,str1));
	
	printf("mystrcmp(str1,str3) = %d, mystrcmp(str2,str3) = %d", 
				mystrcmp(str1,str3), mystrcmp(str2,str3));
	
	return 0;
}