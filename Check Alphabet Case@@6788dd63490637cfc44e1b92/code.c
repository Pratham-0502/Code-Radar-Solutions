#include<stdio.h>
int main(){
    char a,b;
    scanf("%c",&a);
    if(a>=65&&a<=91){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}