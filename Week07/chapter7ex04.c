#include <stdio.h>

char line[100];
float sales;
float tax;
float totalSale;
float total;
char operation;
int comp;

int main(void){ 

  totalSale=0;
  if((operation=='k')|| (operation=='K')){
  comp=1;
  }
  
while(comp != 1){


printf("Total sale:$ %.2f\n", totalSale);
   printf("enter the sales with sum sign, pulse 0k to finish: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f%c", &sales, &operation);

totalSale += sales;
sales = totalSale;




}

tax= sales * 0.08;
total= tax + sales;

printf(" total amount:$ %.2f\n", total);


 return 0;
}