#include<stdio.h>
void evenodd(int x){
   if(x%2==0) printf("%d is even number",x);
 else printf("%d is odd number",x);  
}
int main(){
  int a ;
  printf("Enter a number");
  scanf("%d",&a);
  evenodd(a);

    return 0;
}