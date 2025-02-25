#include <stdio.h>

int main() {
    char ch;
    
    // Take input
    printf("");
    scanf("%c", &ch);  // Read the character
    
    // Check if it is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c Vowel", ch);
    }
    // Check if it is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c Consonant", ch);
    }
    // Check if it is a digit
    else if (ch >= '0' && ch <= '9') {
        printf(" Digit", ch);
    }
    // Otherwise, it's a special character
    else {
        printf(" Special Character", ch);
    }

    return 0;
}
