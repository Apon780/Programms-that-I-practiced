#include<stdio.h>
int main(){
    int x ;
    printf("Input  Number of x:");
    scanf("%d",&x);
    int i = 1;
    int p= 1 ;
    while(i<=x){
         int ld = x%10;
         p=p*i;
        i++;

    }
    printf(" Factorial of %d is :%d",x,p)  ;
    return 0 ;
}