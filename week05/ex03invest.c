#include <stdio.h>

char line [100];
float i1, i2, i3, i, pi1, pi2, pi3;

int main(void){

  printf("Enter first investor: \n ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &i1);

   printf("Enter second investor: \n ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &i2);

   printf("Enter third investor: \n ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &i3);

i = i1 + i2 + i3;
pi1 = (i1/i) * 100;
pi2 = (i2/i) * 100;
pi3 = (i3/i) * 100;
printf("Percentage per inverstment \n Investor 1: %.2f percent \n Investor 2: %.2f percent\n Invertor 3: %.2f percent\n", pi1, pi2, pi3);


}