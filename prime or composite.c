#include<stdio.h>
#include<stdbool.h>
int main(){
    int x ;
    printf("Input  a number:");
    scanf("%d",&x);
    bool flag = true ;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            flag = false ;
            break;
        }
    }
    if(x==1) printf("%d is nor a prime or composite number",x);
    else if (flag==1) printf("%d is a prime number",x);
     else printf("%d is a composite number",x);
    return 0 ;
}