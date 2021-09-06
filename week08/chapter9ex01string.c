/* Write a procedure that counts the number of words in a string.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_words(char *string);

int main(void)
{
	char line[1000];
	printf("Enter string:\n");
	fgets(line, sizeof(line), stdin); /*estring range*/

	
	line[strlen(line)-1] = '\0';

	printf("String contains %d words\n", count_words(line));

	return 0;
}
int count_words(char *string)
{
	int word_count; 
	int counter; 
	word_count = 1;

	for (counter = 0; counter < strlen(string); ++counter) {
    
		if (isspace(string[counter])) {
				++word_count;  /* If the index string is a space it return it*/
		}
		
	}

	return word_count;
}