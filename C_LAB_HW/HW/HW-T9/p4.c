#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t xtime(int time_index);
void print_local_time(time_t t) {
	
	struct tm *time;
	time = localtime(&t);
	char* day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	printf("%d/%d/%d, %02d:%02d:%02d, %s", time->tm_year+1900, time->tm_mon+1, time->tm_mday, time->tm_hour, time->tm_min, time->tm_sec, day[time->tm_wday]);
	
	return;
}


int main(void) {
	time_t t;
	int tindex;

	srand(0);
	scanf("%d", &tindex);

	t = xtime(tindex);
	print_local_time(t);

	return 0;
}
time_t xtime(int time_index) {
	//struct tm t_begin = {0, 0, 0, 1, 0, 120, };
	time_t xnow = 1577836800; // 2020. 1. 1, 00:00:00
	
	while (time_index-- > 0) 
		rand();
	
	xnow += rand()% 31622399;
	return xnow;	
}
