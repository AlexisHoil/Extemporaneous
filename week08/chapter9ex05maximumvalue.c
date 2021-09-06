/* Write a function that returns the maximum value of an array of numbers. */
#include <stdio.h>

int maximum(int *array, int length);

int main()
{
    int range;
    int counter;
	int numbers[range];

    printf("Enter range of numbers:");
    scanf("%d", &range);

    printf("Enter %d elements\n", range);
    for (counter = 0; counter < range; counter++)    
    scanf("%d", &numbers[counter]);

	printf("Maximum value = %d\n", maximum(numbers, range));

	return 0;
}

int maximum(int *array, int length)
{
	int maximum = 0;
	int counter;
	for (counter = 0; counter < length; ++counter) {
		if (array[counter] > maximum)
			maximum = array[counter];
	}
	return maximum;
}