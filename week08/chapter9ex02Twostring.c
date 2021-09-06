/* Write a function begins(string1,string2) that returns true if string1 begins string2.*/
#include <stdio.h>
#include <string.h>

int begins(char *st1, char *st2);

int main(void)
{
	char Finput[100];
	char Sinput[100]; 

	printf("First string\n");
	fgets(Finput, sizeof(Finput), stdin);
	Finput[strlen(Finput)-1] = '\0';
	
	printf("Second string\n");
	fgets(Sinput, sizeof(Sinput), stdin);
	Sinput[strlen(Sinput)-1] = '\0';

	if (begins(Finput, Sinput) != 0)
		printf("Does start\n");
	else
		printf("Does not start\n");

	return 0;
}

int begins(char *st1, char *st2)
{
	int counter;

	for (counter = 0; counter < strlen(st2); ++counter) {
		if (st1[counter] != st2[counter])
			return 0;
	}

	return 1;
}