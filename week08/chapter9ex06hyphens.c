/* Write a function that scans a character array for the character - and replaces it with _. */
#include <stdio.h>
#include <string.h>

char *replace_hyphens(char *string);

int main(void)
{
	
	char line[50]; 
	char string[50];
	printf("Enter thestring (example: hello-world)\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%s", &string); 

	printf("%s\n", replace_hyphens(string));

	return 0;
}


char *replace_hyphens(char *string)
{
	int counter;

	for (counter = 0; counter < strlen(string); ++counter) {
		if (string[counter] == '-')
			string[counter] = '_';
	}

	return string;
}