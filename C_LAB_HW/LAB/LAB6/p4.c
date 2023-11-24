#include <stdio.h>

char mydel (char c, char *del) {
	while (*del && c != *del)
		*del ++;
	
	return *del;
}
char *mystrtok(char *str, char *delim) {
	static char *psave = 0;
	char* pnt =0;
	
	if (str)
		psave = str;
	
	if (psave) {
		str = psave ;
		while (mydel(*str,delim))
			*str++;
		if (*str) {
			pnt = str++;
			
			while (*str && !mydel(*str, delim))
				str++;
			if (*str) {
				psave = str +1;
				*str = '\0';
			}
			else psave = 0;
			
		}
	}
	return pnt;
}

int main(void) {
	char *pstr, *ptoken, *delim;
	int test = 0;

	char test_str[][256] = { "T1,T2 T3, T4  ,T5,,",", ",
		"abc\t  x\ny  z\n\nk", " \t\n",
		"#include <stdio.h>\nint\tmain(void){ int x=3;","# <>\n\t(){}=;"};
	
	scanf("%d", &test);
	if (test > 2 || test < 0) test = 0;
	pstr = test_str[2*test];
	delim = test_str[2*test+1];

	ptoken = mystrtok(pstr, delim);
	
	while (ptoken) {
		printf("%s\n",ptoken);
		ptoken = mystrtok(0, delim);		
	}
		
	return 0;
}