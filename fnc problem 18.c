#include<stdio.h>
void fnc(int size){

    int p=1,i;
    for(i=2;i<=size/2;i++){

          if(size%i==0){
              p=0;
              break;
            }
}
if(p==1&& size>1){
    printf("%d is prime \n",size);

} else{
printf("%d is not prime \n",size);
}

}
int main(){
    int size;
    printf("enter any size: ");
    scanf("%d",&size);

  fnc(size);

return 0;
}
