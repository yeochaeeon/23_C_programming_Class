#include <stdio.h>

typedef struct student {
	int id;
	char *pname;
	double points;
} STUD;

void stud_print(STUD *ps);
void stud_swap(STUD *a, STUD *b);
STUD * stud_get_last(STUD *ps_array);
int stud_compare_points(STUD *ps1, STUD *ps2);

void stud_bubble_sort(STUD * pnucse) {
    
    int len = 7;
	STUD temp;

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len -1 - i; j++) {
			if (pnucse[j].points < pnucse[j+1].points) {
				temp = pnucse[j];
				pnucse[j] = pnucse[j+1];
				pnucse[j+1] = temp;
			}
		}
	}
	return;
    
	//error
    // int len = 7;
	// STUD tmp;

	// for (int i = 0; i < len -1 ; i++) {
	// 	for (int j = 0; j < len - i-1; j++) {
	// 		if (pnucse[j].points > pnucse[j+1].points){
	// 			tmp = pnucse[j] ;
	// 			pnucse[j] = pnucse[j+1];
	// 			pnucse[j+1] = tmp;
	
	// 		}
	// 	}
	// }
	
}


int main(void) { // struct array 
	STUD pnucse[] = { {1, "Choi", 9.9}, {2, "Park", 0.1},
		{3, "Kim", 5.0 }, {4, "Lee", 3.0 }, {5, "Moon", 9.5 },
		{6, "Kang", 7.0 }, {7, "Jeon", 0.9 }, {-1, NULL, 0 } };
		
	STUD * ps_cur = pnucse;
	int test_id = 0;
	scanf("%d",&test_id);
	if (test_id) set_values_of_pnucse(pnucse, test_id); 
	
	stud_bubble_sort(pnucse);
	
	while (ps_cur->id > 0)
		stud_print(ps_cur++);	

	return 0;
}