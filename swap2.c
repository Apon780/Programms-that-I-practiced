#include<stdio.h>
int main(){
   int x ;
   printf("Enter 1st Number :");
   scanf("%d",&x);
   int y ;
   printf("Enter 2nd Number :");
   scanf("%d",&y);
   printf("%d %d\n",x,y);

   x = x+y ;
   y=x-y;
   x=x-y ;
   printf("%d %d\n",x,y);

    return 0 ;
}