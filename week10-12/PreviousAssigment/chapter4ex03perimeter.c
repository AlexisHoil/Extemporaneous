#include<stdio.h>
#include <stdlib.h>

int main (){

int num;
   FILE *fptr;
   fptr = fopen("chapter4ex03result.txt","w+");

   if(fptr == NULL)
   {
    printf("Error :(");   
    exit(1);             
   }
	
	float perimeter, h, w;
    char line_text[50];
	
printf("Enter height: ");
fgets(line_text, sizeof(line_text), stdin);
sscanf(line_text, "%f", &h);
	
printf("Enter width: ");
fgets(line_text, sizeof(line_text), stdin);
sscanf(line_text, "%f", &w);

perimeter = 2.0 * (h + w);
	
printf ("Perimeter: %f\n", perimeter);
printf ("The result was printed to the file: chapter4ex03result.txt");

fprintf (fptr, "Perimeter: %f\n", perimeter);
fclose(fptr);
	
}