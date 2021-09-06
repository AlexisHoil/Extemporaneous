#include <stdio.h>

int main(void)
{
	int list_length; 
	int counter;     

	struct mailing {
		char flight_number[30];
		char originating[30];
		char destination[30];
		char starting[40];
        char arrival[40];
	
	};

	struct mailing list[] = {
		{
			"231658947",
			"FLZ",
			"TRW",
			"22:30",
            "3:45",
		},
	};

	list_length = sizeof(list) / sizeof(list[0]);

	for (counter = 0; counter < list_length; ++counter) {
		printf("Flight number: %s\n", list[counter].flight_number);
		printf("Originating airport code: %s\n", list[counter].originating);
        printf("destination airport code: %s\n", list[counter].destination);
		printf("Starting time: %s\n", list[counter].starting);
        printf("Arrival time: %s\n", list[counter].arrival);

	}

	return 0;
}