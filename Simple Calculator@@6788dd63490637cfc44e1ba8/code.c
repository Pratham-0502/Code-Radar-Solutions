#include<stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%c",&c);
    if(c=='+'){
        printf("%f",a+b);
    }
    else if(c=='-'){
        printf("%f",a-b);
    }
    else if(c=='*'){
        printf("%f",a*b);
    }
    else{
        printf("%f",a/b);
    }
    return 0;
}