#include <stdio.h>
#define MAX_NUMBER	10000
int notselfnum(int n){
	int sum = n;
	if(n/10 == 0 ){
		return n+n;
	}
	else {
		while(1){
			if(n == 0){
				return sum;
				break;
			}
			sum += n % 10;
			n /= 10;
		}
	}
}


int main(void) {
	int arr[MAX_NUMBER] = {0,};
	for ( int i =1; i < MAX_NUMBER; i++){
		int result = notselfnum(i);
		if (result < MAX_NUMBER) arr[result] = 1; 
	}
	
	for (int j = 1; j <MAX_NUMBER; j++){
		if(arr[j] == 0) printf("%d\n", j);
	}
	return 0;
}
