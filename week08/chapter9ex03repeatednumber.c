/* Write a function count(number, array, length) that counts the number of times number appears in array.
The array has length elements. The function should be recursive.*/
#include <stdio.h>

int count(int number, int *array, int length);

int main(void)
{
	    int range;
    int counter;
	int numbers[range];
  int repeatedNum;

    printf("Enter range of numbers:");
	fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &range);

    printf("Enter the number repeated:");
	fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &repeatedNum);

   
    printf("Enter %d elements\n", range);
    for (counter = 0; counter < range; counter++)    
    scanf("%d", &numbers[counter]);

	printf("Array contains %d times the number %d\n", count(repeatedNum, numbers, range), repeatedNum);

	return 0;
}

int count(int number, int *array, int length)
{
	if (length == 0)
		return 0;

	return (*array == number) + count(number, array+1, length-1);
}