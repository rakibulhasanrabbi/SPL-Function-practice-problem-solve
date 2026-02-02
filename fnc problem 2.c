
#include<stdio.h>
void fnc(char ch){
   printf("\n this is char value: %c\n\n",ch);
 }
 int main(){
     char n;
     printf("enter any char: ");
     scanf("%c",&n);
 fnc(n); //function call
 return 0;
 }
