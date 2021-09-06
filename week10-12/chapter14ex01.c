#include<stdio.h>

int main(){

	char filename[FILENAME_MAX];
	
	printf("Enter file name: ");
	scanf("%s",filename);

    FILE *ptr_file; int c=0,n=0;char l;
    ptr_file = fopen(filename, "r");
    if (ptr_file == NULL)
    {
        puts("Error");

    }
    while((c = fgetc(ptr_file)) != EOF){
        if( c == '\n')
            n++;
        putchar(c);
    }
    printf ("\nNumber of lines: %d\n",n+1);
    fclose(ptr_file);

    return 0;
}