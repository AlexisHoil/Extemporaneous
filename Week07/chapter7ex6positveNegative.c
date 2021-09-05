#include <stdio.h>
#include <ctype.h>

char line[100];
int num;
unsigned int p, n; //declare positive and negative = unsigned int
int main(void)
{
	printf("Enter a number series and push enter for each one:\n (write (y-Y) when you end)\n");
	while (1) {
		fgets(line, sizeof(line), stdin);
		if (line[0] == 'y' || line[0] == 'Y');
		sscanf(line, "%d", &num);
		if (num > 0)
			++p;
		else if (num < 0)
			++n;
	}
	printf("Positive numbers: %u\n", p);
	printf("Negative numbers: %u\n", n);

}