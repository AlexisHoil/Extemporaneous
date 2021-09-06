#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num;
char line [20];
int x,z;

int main()
{
   int n;
   FILE *fptr;
   if ((fptr = fopen("result.txt","w+")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   fscanf(fptr,"%d", &n);

    for(x=0; x<n ; x++){
        for(z=0; z<n; z++)
            printf("*");
        printf("\n", n);
    }

  fclose(fptr);
    return 0;
}