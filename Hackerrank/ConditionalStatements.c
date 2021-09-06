#include <stdio.h>

int main()
{
    int number; 
    scanf("%d",&number);
    
    if (number == 1) {printf("one");}
    else if (number == 2) {printf("two");}
    else if (number == 3) {printf("three");}
    else if (number == 4) {printf("four");}
    else if (number == 5) {printf("five");}
    else if (number == 6) {printf("six");}
    else if (number == 7) {printf("seven");}
    else if (number == 8) {printf("eight");}
    else if (number == 9) {printf("nine");}
    else if (number>9) {printf("Greater than 9");}
    else{
        printf("The number is invalid");
    }
    return 0;
}
