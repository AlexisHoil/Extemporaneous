#include <stdio.h>

struct time {
	int day;   
	int month; 
	int year;   
	int hour;    
	int minutes; 
};

int timediff(struct time first_time, struct time second_time);

int main(void)
{
	struct time times[] = {
		{
			5,    
			10,   
			2015, 
			13,   
			51    
		},
		{
			9,    
			5,   
			2017, 
			18,  
			33  
		}
	};

	printf("Time difference is %d minutes\n", timediff(times[0], times[1]));

	return 0;
}

int timediff(struct time first_time, struct time second_time)
{
	int first_minutes;  
	int second_minutes; 

	first_minutes = first_time.minutes + (first_time.hour * 60);
	second_minutes = second_time.minutes + (second_time.hour * 60);

	if (first_minutes >= second_minutes)
		return first_minutes - second_minutes;
	else
		return second_minutes - first_minutes;
}