
#include<stdio.h>
void fnc(int num){
    if(num>0)
   printf("positive\n\n");
   else if(num==0)
    printf("Zero\n\n");
   else
    printf("neg\n\n");
 }
 int main(){
     int n;
     printf("enter any num: ");
     scanf("%d",&n);
 fnc(n); //function call
 return 0;
 }
