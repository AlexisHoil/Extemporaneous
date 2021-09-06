#include <stdio.h>

#define num_max 5

int main()
{
	int numbers[num_max] = {2, 4, 5, 6, 8};
	int *numbers_p; /*numbers array*/

	for (numbers_p = &numbers[0]; numbers_p < &numbers[num_max]; ++numbers_p) {
		*numbers_p = 0;
	}

	int counter;

	for (counter = 0; counter < num_max; ++counter) {
		printf("numbers[%d] = %d\n", counter, numbers[counter]);
	}

	return 0;
}