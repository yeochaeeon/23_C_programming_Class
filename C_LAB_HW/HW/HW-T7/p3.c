#include <stdio.h> 
int hexa2decimal(char hexa_str[]) {
char temp[100] = {};	
int cnt=0;
for (int i = 0; hexa_str[i] != '\0' ; i++){
		cnt = cnt + 1;
	}
for (int i = 0; i< cnt ; i++) {
	
	temp[cnt-i-1]= hexa_str[i];
	
	}


int sum = 0;
int hex = 1;
for (int j = 0; temp[j] != 'x'; j++ ) {
	if (temp[j] >= 'A' && temp[j] <= 'F') sum = sum + (temp[j] - 'A' + 10)*hex;
	else if (temp[j] >= '0' && temp[j] <= '9') sum = sum + (temp[j] -'0')*hex; 
	hex = hex * 16;
}
	return sum;
}

int main(void) {
	char hexa1[] = "0x1F34";
	char hexa2[] = "0x34CD56";
	char hexa3[] = "0x34FD5A";	

	printf("%s = %d\n", hexa1, hexa2decimal(hexa1));
	printf("%s = %d\n", hexa2, hexa2decimal(hexa2));
	printf("%s = %d\n", hexa3, hexa2decimal(hexa3));

	return 0;
}