#include<stdio.h>
void fnc(int n){
   int fact=1;
   for(int i=1;i<=n;i++){
    fact*=i;
   }
    printf("factorial num: %d\n",fact);

   }
 int main(){
  int n;
  scanf("%d",&n);

  fnc(n);

  return 0;
  }
