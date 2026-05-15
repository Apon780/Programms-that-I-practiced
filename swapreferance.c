#include<stdio.h>
void swap(int*x , int* y){
    int temp = *x ;
    *x = *y ;
    *y = temp;
}
int main(){
   int x ;
   printf("Enter 1st Number :");
   scanf("%d",&x);
   int y ;
   printf("Enter 2nd Number :");
   scanf("%d",&y);
   printf("%d %d\n",x,y);
   swap(&x,&y);
   printf("%d %d\n",x,y);

    return 0 ;
}