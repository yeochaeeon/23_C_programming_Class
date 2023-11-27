#include <stdio.h>
#include <time.h>

void print_local_time_after_kdays(time_t t, int k) {
	
    struct tm *time;
    time_t later = t + k * (60 * 60 * 24);
    time = localtime(&later);

    char* day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	// char * day[7] == double array 
    printf("%d/%d/%d, %02d:%02d:%02d, %s\n", time->tm_year+1900, time->tm_mon + 1, time->tm_mday+1, time->tm_hour,time->tm_min, time->tm_sec, day[time->tm_wday]);

    return;
}

int main(void) {
	int k=0;
	time_t now = 1669856792; // 2022/12/01 01:06:32
	
	scanf("%d", &k);
	
	print_local_time_after_kdays(now, k);

	return 0;
}