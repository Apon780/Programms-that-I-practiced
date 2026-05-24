#include<stdio.h>
void sum1ton(int n ,int sum){
    if(n==0){
        printf("%d",sum);
        return ;
    }
   sum1ton(n-1,sum+n);
   
} 

int main(){
int n ;
printf("Enter n :");
scanf("%d",&n);

sum1ton(n,0);

    return 0;
} 