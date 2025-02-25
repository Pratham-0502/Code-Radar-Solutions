#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("%d", a); // a is the largest side
    } else if (b > a && b > c) {
        printf("%d", b); // b is the largest side
    } else if (c > a && c > b) {
        printf("%d", c); // c is the largest side
    }
    
    return 0;
}
