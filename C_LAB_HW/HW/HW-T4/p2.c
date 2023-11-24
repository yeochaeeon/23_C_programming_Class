#include <stdio.h> 

// find the equivalent number out of 3

int is_found(int b, int e, int n){
	int i ;
	for (i=b; i<=e && !(n%i ==0); i++);
	
	if (i <= e ) return 1;
	
	else return 0;
}

int main(void) {
	int b,e,n;

	scanf("%d%d%d", &b,&e,&n);

	if (is_found(b,e,n))
		printf("found.\n");
	else
		printf("not found.\n");

	return 0;
}