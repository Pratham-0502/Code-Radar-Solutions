#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d", &a);   
    scanf("%d", &b);    
    scanf("%c", &c);  
    if (c == '+') {
        // result = a + b;
        printf("%d\n", a+b);  
    }
    else if (c == '-') {
        // result = a - b;
        printf("%d\n", a-b);
    }
    else if (c == '*') {
        // result = a * b;
        printf("%d\n", a*b);
    }
    else if (c == '/' && b!=0) {
        if (b != 0) {  
            // result = a / b;
            printf("%d\n", a/b);
        }
        else {
            printf("error");
        }
    }
    return 0;
}
