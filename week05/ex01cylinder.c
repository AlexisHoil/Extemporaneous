#include <stdio.h>


Char line[100];
 
float radious, h, a, v, Pi;


int main(void) {


  printf("Enter cylinder radious and high: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f %f", &radious, &h);

  Pi = 3.1416;
  
  a= 2* Pi * radious *(radious + h);
  v=( Pi *(radious * radious)) * h;
  printf("The area is %.2f and the volume is %f \n", a, v);
 
  return 0;
}