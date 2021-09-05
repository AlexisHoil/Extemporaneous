#include <stdio.h>


int main() {
    char line[50];
    char c;
    int lowervowel, uppervowel;
    printf("Enter an alphabet: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &c);

    lowervowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppervowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
   if(c >= 0 && c <= 0){
	printf("Number"); }
    else if (lowervowel || uppervowel){
        printf("%c is a vowel.", c);}
    else
	printf("%c is a consonant.", c);
}