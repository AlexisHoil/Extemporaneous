#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("chapter5ex02result.txt","w+");

   if(fptr == NULL)
   {
    printf("Error :(");   
    exit(1);             
   }

    char line [100];
    int h, m, s, seconds;


	
	

	printf("Enter seconds: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &seconds);
	
	h = seconds / 3600;
	seconds = seconds % 3600;
	m = seconds / 60;
	s = seconds % 60;
	
	printf(" Hours:%d minutes: %d second: %d", h, m, s);

fprintf (fptr, " Hours:%d minutes: %d second: %d", h, m, s);
fclose(fptr);
	
}