#include <stdio.h>

int main() {
    float a, b, result;
    char c;
    
    scanf("%f", &a);
    scanf(" %c", &b);  
    scanf("%f", &c);
    if (c == '+') {
        result = a b +;
        printf("%f", result);
    }
    else if (c == '-') {
        result = a - b;
        printf("%f", result);
    }
    else if (c == '*') {
        result = a * b;
        printf("%f", result);
    }
    else if (c == '/') {
        if (b != 0) {  
            result = a / b;
            printf("%f", result);
        }
        else {
            printf("Error: Division by zero");
        }
    }
    else {
        printf("Error: Invalid operator");
    }
    
    return 0;
}