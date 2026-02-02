#include<stdio.h>
fnc(int n1,int n2){
    int temp;
    if(temp==0){
        temp=n1;
        n1=n2;
        n2=temp;
    }
      printf("function: %d %d\n\n",n1,n2);
    }

 int main(){
     int num1,num2;
     printf("enter any num: ");
     scanf("%d%d",&num1,&num2);
     printf("Main: %d %d\n\n",num1,num2);
     fnc(num1,num2);

 return 0;
 }
