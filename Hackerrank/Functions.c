#include <stdio.h>

int max_of_numbers(int a, int b, int c, int d) {
    if (a > b && a > c && a > d) { return a; }
    if (b > a && b > c && b > d) { return b; }
    if (c > a && c > b && c > d) { return c; }
    if (d > a && d > b && d > c) { return d; }
    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int response = max_of_numbers(a, b, c, d);
    printf("%d", response);
    
    return 0;
}