#include<stdio.h>
fnc(int *n1,int *n2){
    int temp;
    if(temp==0){

        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
      printf("function: %d %d\n\n",*n2,*n1);
    }

 int main(){
     int num1,num2,temp=0;
     printf("enter any num: ");
     scanf("%d%d",&num1,&num2);
     temp=num1;
     num1=num2;
     num2=temp;

     printf("Main: %d %d\n\n",num1,num2);
     fnc(&num1,&num2);

 return 0;
 }
