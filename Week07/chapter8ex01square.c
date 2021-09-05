#include <stdio.h>

int h;
int v;
int line_number;      
int counter;           
int t;        
int main(void)
{
	h = 8;
	v = 8;
	t = v * 4 + 1;

	for (line_number = 0; line_number < t; ++line_number) {
		if (line_number == 0 || line_number%4 == 0) {
			for (counter = 0; counter < h; ++counter)
				printf("+-----");

			printf("+\n");
		}
		else {
			for (counter = 0; counter < h; ++counter)
				printf("|     ");

			printf("|\n");
		}
	}
}