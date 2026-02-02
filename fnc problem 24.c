#include<stdio.h>

int gcd(int n1,int n2){
 for(int i=0;n2!=0;i++){
    int temp=n2;
    n2=n1%n2;
    n1=temp;

 }

 return n1;

 }

 int lcm(int n1,int n2){

 return(n1*n2)/gcd(n1,n2);
 }

 int main(){
    int num1, num2;

    printf("Enter two number:\n");
    scanf("%d%d", &num1, &num2);


   int G=gcd(num1,num2);
   int L= lcm(num1,num2);


    printf("GCD: %d\n",G);

    printf("LCM: %d\n",L);


  return 0;
}
