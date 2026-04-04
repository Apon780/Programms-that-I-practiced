#include<stdio.h>
int main(){
     char ch;
     printf("Enter The Operator:");
    scanf("%c",&ch);
    int a ;
    printf("Enter 1st Number:");
    scanf("%d",&a);
    int b ;
    printf("Enter 2nd Number:");
    scanf("%d",&b);
    
    if(ch=='+' ) printf("%d",a+b);
   else if(ch=='-' ) printf("%d",a-b);
   else if(ch=='*' ) printf("%d",a*b);
   else if(ch=='/' ) printf("%d",a/b);
   else  printf("Invalid");
    return 0 ;
}