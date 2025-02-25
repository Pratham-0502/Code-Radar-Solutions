#include <stdio.h>

int main() {
    char ch;
    int d;
    
    // Take input
    printf("");
    scanf("%c", &ch);
    scanf("%d",&d);
    
    // Check if it is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel", ch);
    }
    // Check if it is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf(" Consonant", ch);
    }
    // Check if it is a digit
    else if (d >= 0 && d <= 9) {
        printf(" Digit", d);
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character", ch);
    }

    return 0;
}
