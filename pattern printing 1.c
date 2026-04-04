#include<stdio.h>
int main () {
    int x ;
    printf ("Enter number of rows :");
    scanf("%d",&x);
    int a =1;
        for( int i=1;i<=x;i++){
        for( int j=i;j<=x;j++){ 
        printf("%d  ",a);
        a++ ;
    }
printf("\n");
    }
return 0 ;
}