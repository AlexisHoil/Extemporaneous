#include <stdio.h>

char line[50];
unsigned int numb;

int prime(int num);
int main(void)
{
	printf("Enter a number: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%u", &numb);

	if (prime(numb))
		printf("%u prime number.\n", numb);
	else
		printf("%u not prime .\n", numb);

	return 0;
}

int prime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}