#include <stdio.h>

char line [100];
int year;

int main(void)
{
    
  printf("Enter the year: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &year);


    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
        printf( "Leap Year" );
    else
        printf( "Not Leap Year" );

    return 0;
}