#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
#define END_MARK -1

int get_len_max_min(int *pnums, int *pmax, int *pmin) {
	int *pcur = pnums;
	while (* pcur != END_MARK) {
		if (pcur == pnums) {
			*pmax = *pcur;
			*pmin = *pcur;
		}
		else {
			if (*pmax < *pcur) *pmax = *pcur;
			if (*pmin > *pcur) *pmin = *pcur;
		}
		pcur ++;
	} 
	return pcur - pnums;
	}	

	
void generate_values (int *pnums) {
	int nseed = 0;
	int n_items;
	
	scanf("%d", &nseed);
	srand(nseed);
	
	n_items = rand()%999+1;
	while(n_items) {
		*pnums++ = rand()%10000;
		n_items--;
	}
	*pnums = END_MARK;	
	
}

int main(void) {
	int nums[MAX_SIZE];
	int max=0, min=0, len=0;
	
	generate_values(nums);
	len = get_len_max_min(nums, &max, &min);

	printf("Length(Nums) = %d, Max(nums)=%d, Min(nums)=%d\n", len, max, min);
	return 0;
}