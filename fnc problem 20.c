
#include<stdio.h>
int isPrime(int size){
  if(size<=1)
    return 0;
     if(size<=3)
      return 1;
           if(size%2==0 || size%3==0){
             return 0;
        }
        for(int i=5;2*i<size;i+=6){
            if(size%i==0 ||size%(i+2)==0){
                return 0;
            }
        }
        return 1;
          }



int generatePrime(int size){
    if(size<=0)
        return -1;
    int count=0;
    int i;
    for(i=2;count<size;i++){
        if(isPrime(i)){
            count++;
        }
    }


return i-1;
}


int main(){
    int size;
    printf("enter any size: ");
    scanf("%d",&size);
    int n=generatePrime(size);
    if(n==-1){
        printf("not prime\n");
    }else{
    printf("%dth prime: %d \n",size,n);
    }

}
