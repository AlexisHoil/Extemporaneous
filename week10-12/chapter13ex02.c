#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *nonwhite(char *string);

int main()
{
	char string[] = "Robotic Engineering";
	printf("First none white character in the string is: '%c'\n", *nonwhite(string));
	return 0;
}
char *nonwhite(char *string)
{
    while (*string != '\0') {
		if (! isspace(*string))
			return string;
		++string;
	}
    return string;
}