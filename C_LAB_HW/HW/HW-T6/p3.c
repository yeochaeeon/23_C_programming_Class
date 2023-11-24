#include <stdio.h> 
#define NSIZE 3

//

void printNxN(int m[NSIZE][NSIZE]); 	// Function Declaration

int main(void) {
	int A[NSIZE][NSIZE]={	
			{1,2,3},
			{4,5,6},
			{7,8,9} };
	int i,j,k;

	printNxN(A);
	for(i =0;i<NSIZE; i++){
		for (int j =i; j<NSIZE; j++){
			int tmp = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = tmp;
		}
	}



	printNxN(A);

	return 0;
}

void printNxN(int m[NSIZE][NSIZE]) {
	int i,j;
	char lineseg[8]="-------";

	printf("+");
	for (i=0;i<NSIZE;i++) printf("%s",lineseg);
	printf("+\n");

	for (i=0;i<NSIZE;i++) {
		printf("|");
		for (j=0;j<NSIZE;j++)	printf("%6d ",m[i][j]);
		printf("|\n");
	}

	printf("+");
	for (i=0;i<NSIZE;i++) printf("%s",lineseg);
	printf("+\n");
}
