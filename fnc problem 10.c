
#include<stdio.h>
void fnc(int num1,int num2){
   int p=0;
   for(int i=1;i<=num1;i++){
    p=pow(num1,num2);
   }
    printf("power num: %d\n",p);

   }
 int main(){
  int num1,num2;
  printf("num1: ");

  scanf("%d",&num1);
  printf("num2: ");

  scanf("%d",&num2);

  fnc(num1,num2);

  return 0;
  }
