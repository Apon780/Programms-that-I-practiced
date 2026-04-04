#include<stdio.h>
int main(){
    int x ;
    printf("Input  Number of x:");
    scanf("%d",&x);
    int y ;
    printf("Enter the limit:");
    scanf("%d",&y);
    for(int i=x ; i<=y ;i=i+1){
     printf("%d ",x);
     x=x*4 ;
    }
    return 0 ;
}