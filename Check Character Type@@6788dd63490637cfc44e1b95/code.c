#include <stdio.h>

int main() {
    char ch;
    
    // Take input
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if it is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c Vowel\n", ch);
    }
    // Check if it is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c Consonant\n", ch);
    }
    // Check if it is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c Digit\n", ch);
    }
    // Otherwise, it's a special character
    else {
        printf("%c Special Character\n", ch);
    }

    return 0;
}
