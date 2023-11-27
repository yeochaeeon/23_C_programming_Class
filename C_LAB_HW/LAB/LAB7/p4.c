#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


typedef struct {
	struct tm start;
	struct tm end;
} TimePeriod;

struct tm parse_datetime(char* datetime_str) {
	//Implement your code
	struct tm tm={};
	sscanf(datetime_str, "%d-%d-%d %d:%d", &tm.tm_year, &tm.tm_mon, &tm.tm_mday, &tm.tm_hour, &tm.tm_min);
	
	tm.tm_year -= 1900;
	tm.tm_mon  -= 1;
	
	return tm;
    
}

TimePeriod detect_schedule_conflict(struct tm *start1, struct tm *end1, 
                                    struct tm *start2, struct tm *end2) {
	//Implement your code
	TimePeriod overlap;
	if (difftime(mktime(end1), mktime(start2))> 0 &&  difftime(mktime(end2), mktime(start1))> 0){
		overlap.start= *start2; 
		overlap.end  = *end1;
	} 
	else{
		overlap.start.tm_year =0;
	}
	return overlap;
	
	// start1     end1
	// 		start2         end2 
}

void print_time(struct tm *t) {
	printf("%02d:%02d", t->tm_hour, t->tm_min);
}

void print_schedule_conflict(TimePeriod *overlap) {
	if (overlap->start.tm_year != 0) { 
		printf("Schedule conflict detected on %04d-%02d-%02d between ",
					 overlap->start.tm_year + 1900, overlap->start.tm_mon + 1, overlap->start.tm_mday);
		print_time(&overlap->start);
		printf(" and ");
		print_time(&overlap->end);
		printf(".\n");
	} else {
		printf("No schedule conflict.\n");
	}
}

int main() {
	struct tm periods[8][2] = {
		{parse_datetime("2023-11-20 09:00"), parse_datetime("2023-11-20 12:00")},
		{parse_datetime("2023-11-20 11:00"), parse_datetime("2023-11-20 13:00")},
		{parse_datetime("2023-11-20 14:00"), parse_datetime("2023-11-20 15:00")},
		{parse_datetime("2023-11-20 15:30"), parse_datetime("2023-11-20 16:00")},
		{parse_datetime("2023-11-21 17:00"), parse_datetime("2023-11-21 18:00")},
		{parse_datetime("2023-11-21 18:00"), parse_datetime("2023-11-21 19:00")},			
		{parse_datetime("2023-11-21 08:00"), parse_datetime("2023-11-21 09:00")},
		{parse_datetime("2023-11-22 08:00"), parse_datetime("2023-11-22 09:00")},		
	};

	for (int i = 0; i < 4; i++) {
		TimePeriod overlap = detect_schedule_conflict(&periods[i][0], &periods[i][1], &periods[i + 1][0], &periods[i + 1][1]);
		print_schedule_conflict(&overlap);
	}

	return 0;
}