#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
/**
* @brief : generate and return a random digit in 0~9
* @return : a digit in 0~9
* @param	 : none
*/
int generate_a_digit(void) {
	return (rand()%10);
}

/**
* @brief : generate a 3-digits target integer for the puzzle
* @return : return an integer with 3 different digits in 0~9
* @param : none
*/
int generate_target_number_approach2(void) {
// 	int digits[3];
// 	int target = 0;

// 	srand(time(0));

// 	digits[0] = generate_a_digit();
// 	digits[1] = generate_a_digit();

// 	while(digits[0] == digits[1]){
// 		digits[1] = generate_a_digit();
// 	}

// 	digits[2] = generate_a_digit();

// 	while( (digits[0] == digits[2]) || (digits[1] == digits[2])){
// 		digits[2] = generate_a_digit();	
// 	}

// 	target = digits[0] * 100 + digits[1] * 10 + digits[2];

// 	return target;


int returnnum = 0 ;
int d[3];

while (1){
	for (int i=0; i <3; i++){
		d[i] = generate_a_digit();
		}
	if (d[0] != d[1] && d[0] != d[2] && d[1] != d[2]) break; 
	}

	for (int i = 0; i <3 ;i ++){
		returnnum = returnnum *10 +d[i];
	}

	return returnnum;


}

// Test codes below are hidden intentionally
int is_different_digits2(int num);

int main(void) {
	int num_arrays[100];
	
	int i, j, ndup = 0;
	
	srand(time(0));

	for (i=0; i<100; i++) {
		num_arrays[i] = generate_target_number_approach2();
		
		if (!is_different_digits2(num_arrays[i]))
			break;
		
		for (j=0; j<i; j++)
			if (num_arrays[j]==num_arrays[i]) {
				ndup++;		
				break;
		}
	}
	
	if (i < 100 || ndup > 20) 
		printf("Sorry, Your function does not pass the test\n");
	else
		printf("Good, Your function passes the test\n");
	
	return 0;
}

/**
* @brief : check digit duplication
* @return : return true if all digits of the number are different, false otherwise.
* @param	 : 	num - a 3-digits number to be checked for digit duplication.
*/
int is_different_digits2(int num) {
	int digits[3];
	int is_different = 1; 

	digits[0] = num%10;
	digits[1] = (num/10)%10;
	digits[2] = (num/100)%10;
	if ((digits[0] == digits[1]) ||
		(digits[0] == digits[2]) ||
		(digits[1] == digits[2]) )
		is_different = 0;

	return is_different;
}