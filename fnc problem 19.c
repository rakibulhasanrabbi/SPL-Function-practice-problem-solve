#include<stdio.h>
int isprime(int size){
  if(size<=1)
    return 0;
   if(size<=3)
    return 1;
    if(size%2==0 || size%3==0){
        return 0;
        for(int i=5;i<size;i+=6){
            if(size%i==0 ||size%(i+2)==0){
                return 0;
            }
        }
        return 1;
    }



}
void generatePrime(int size){
printf("size: %d \n",size);
for(int i=2;i<size;i++){
        if(isprime(i)){
                printf("%d \n",i);
             }
      }
}
int main(){
    int size;
    printf("enter any size: ");
    scanf("%d",&size);
    generatePrime(size);


return 0;
}
