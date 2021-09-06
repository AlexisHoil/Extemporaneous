/*Write a function that takes a character array and returns a 
primitive hash code by adding up the value of each character in the array. */
#include <stdio.h>
#include <string.h>

int stringtotal(char *string); 
void printhex(int number);

int main()
{
	char line[50]; 
	char string[50];
	printf("Enter your digit\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%s", &string); 
	

	printhex(stringtotal(string));

	return 0;
}


int stringtotal(char *string)
{
	int counter;
	int total = 0; 

	for (counter = 0; counter < strlen(string); ++counter) {
		total += string[counter];
	}

	return total;
}


void printhex(int number)
{
	printf("%#x\n", number);
}