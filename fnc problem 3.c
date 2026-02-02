
#include<stdio.h>
void fnc(int num){
    if(num%2==0)
   printf("Even\n\n");
   else
    printf("Odd\n\n");
 }
 int main(){
     int n;
     printf("enter any num: ");
     scanf("%d",&n);
 fnc(n); //function call
 return 0;
 }
