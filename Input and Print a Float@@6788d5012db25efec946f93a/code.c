#include <stdio.h>

int main() {
    float number;

    // Prompt the user for input
    printf("You entered: ");
    
    // Read the float value from the user
    scanf("%f", &number);

    // Print the entered float number
    printf("%.2f\n", number);

    return 0;
}
