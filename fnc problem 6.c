#include<stdio.h>
void fnc(int num1,int num2,int num3){
    int sum=0;
    sum=num1+num2+num3;
      printf("function: %d\n\n",sum);
    }

    void fnc(arr){

    }

 int main(){
     int num1,num2,num3;
     scanf("%d%d%d",&num1,&num2,&num3);
     int sum=0;
     sum=num1+num2+num3;
     fnc(num1,num2,num3);
     printf("Main: %d\n\n",sum);

 return 0;
 }
