#include<stdio.h>
int main () {
    int x ;
    printf ("Enter number of rows :");
    scanf("%d",&x);
    
    for( int i=1;i<=x;i++){
        for( int j=1;j<=i;j++){
            if(i%2==0);
            {
                int k = 25 + i ;
                printf("%c",k);
            }
        printf("%d ",j);
    }
    printf("\n");
    }
return 0 ;
}