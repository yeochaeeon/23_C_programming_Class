#include <stdio.h>

//draw 

void line(int n1, int n2, int n3, int n4) {
	
	int i;
	for(i=0; i<n1; i=i+1) printf(". ");  
	for(i=0; i<n2; i=i+1) printf("* ");  
	for(i=0; i<n3; i=i+1) printf(". ");  
	for(i=0; i<n4; i=i+1) printf("* ");  
	printf("\n");
}

int main(void) {
	int j;

	for(j=0; j<10; j=j+1)
		line(9-j, 1+2*j,9-j,0);
	for(j=0; j<9; j=j+1)
		line(0,1+j,17-2*j,1+j);
	return 0;
}