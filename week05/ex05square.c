#include <stdio.h>

char line [100];
int x,z,n;

int main(void)
{
    printf("Write 4 and press enter: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &n);

  
    for(x=0; x<n ; x++){
        for(z=0; z<n; z++)
            printf("*");
        printf("\n");
    }

    return 0;
}