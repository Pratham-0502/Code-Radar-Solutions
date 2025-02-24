#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a,&b);
    if(a>b){
        printf("True");
    }
    elseif(b>a){
        printf("False");
    }
    return 0;
}