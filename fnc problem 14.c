#include<stdio.h>
fnc(int size){

int array[size],i;
printf("size: ");
for(i=0;i<size;i++){
    scanf("%d",&array[i]);
  }
  for(i=0;i<size;i++){
    if(array[i]%2==0){
        printf("even array: %d\n\n",array[i]);
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
