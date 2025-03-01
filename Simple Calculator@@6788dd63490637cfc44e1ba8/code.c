#include <stdio.h>

int main() {
    int a, b, result;
    char c;
    
    // Read the first number (integer)
    scanf("%d", &a);
    
    // Read the second number (integer)
    scanf("%d", &b);
    
    // Read the operator (with a space before %c to handle newline from the previous input)
    scanf(" %c", &c);
    
    // Perform operation based on the operator
    if (c == '+') {
        result = a + b;
        printf("%d\n", result);  // Printing the result as integer
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
            printf("Error: Division by zero\n");
        }
    }
    else {
        printf("Error: Invalid operator\n");
    }
    
    return 0;
}
