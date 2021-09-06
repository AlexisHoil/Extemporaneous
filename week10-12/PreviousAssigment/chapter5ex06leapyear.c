#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num;
char line [20];

int main()
{
   int year;
   FILE *fptr;

   if ((fptr = fopen("chapter5ex06result.txt","r")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   fscanf(fptr,"%d", &year);

    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
        printf( "Leap Year", year);
    else
        printf( "Not Leap Year", year);

  fclose(fptr); 
   return 0;
}