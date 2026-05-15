#include<stdio.h>
void japan(){
    printf("You are in japan\n");
    void thai();
    thai();
} 
void england(){
    printf("you are in england\n");
    japan();
}
void thai(){
    printf("you are in thai\n");
}
int main(){
  int a ;
  printf("You are in Bangladesh\n");
  england();
  

    return 0;
}