#include <stdio.h>

int main() {
    float a, b, result;
    char c;
    
    // Read the first number
    scanf("%f", &a);
    
    // Read the second number
    scanf("%f", &b);
    
    // Read the operator (with a space before %c to handle newline from the previous input)
    scanf(" %c", &c);
    
    // Perform operation based on the operator
    if (c == '+') {
        result = a + b;
        printf("%f", result);  // Formatting to print 2 decimal places
    }
    else if (c == '-') {
        result = a - b;
        printf("%.2f\n", result);
    }
    else if (c == '*') {
        result = a * b;
        printf("%.2f\n", result);
    }
    else if (c == '/') {
        if (b != 0) {  
            result = a / b;
            printf("%.2f\n", result);
        }
        else {
            printf("Error: Division by zero\n");
        }
    }
    else {
        printf("Error: Invalid operator\n");
    }
    
    return 0;
}
