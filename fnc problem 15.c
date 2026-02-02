#include<stdio.h>
fnc(int size){

int array[size],i,loc;
printf("size: ");
for(i=0;i<size;i++){
    scanf("%d",&array[i]);
  }
  for(i=1;i<size;i++){
    if(array[i]<array[loc]){
            loc=i;
        printf("min array: %d\n\n",array[loc]);
    }
}
}

int main(){
    int size;
    printf("enter any number: ");
    scanf("%d",&size);
  fnc(size);

return 0;
}
