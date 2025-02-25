#include<stdio.h>
int main(){
    char ch;
    int b;
    scanf("%c",&ch);
    scanf("%d",&b);
    if(ch=='a'||'e'||'i'||'o'||'u'){
        printf("Vowel");
    }
    else if(b){
        printf("Digit");
    }
    else{
        printf("Consonant");
    }
    return 0;
}