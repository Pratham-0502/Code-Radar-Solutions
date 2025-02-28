#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    // scanf("%d",&b);
    if(a>1 && a%1==0 && a%a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}