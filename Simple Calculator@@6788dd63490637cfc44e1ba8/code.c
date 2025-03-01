#include <stdio.h>

int main() {
    int a, b, result;
    char c;
    scanf("%d", &a);   
    scanf("%d", &b);    
    scanf(" %c", &c);  
    if (c == '+') {
        result = a + b;
        printf("%d\n", result);  
    }
    else if (c == '-') {
        result = a - b;
        printf("%d\n", result);
    }
    else if (c == '*') {
        result = a * b;
        printf("%d\n", result);
    }
    else if (c == '/') {
        if (b != 0) {  
            result = a / b;
            printf("%d\n", result);
        }
        else {
            printf("error");
        }
    }
    return 0;
}
