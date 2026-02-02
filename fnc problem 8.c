#include<stdio.h>
void fnc(){

int array[20],new_array[20],num,i;
printf("enter any number: ");
scanf("%d",&num);
for(i=0;i<num;i++){
    scanf("%d",&array[i]);
}
printf("before REv: ");
for(i=0;i<num;i++){
    printf("%d ",array[i]);
}
printf("\n\n");
printf("After REv: ");
for(i=1;i<=num;i++){
    new_array[i]=array[num-i];
    printf("%d ",new_array[i]);
}
printf("\n\n");
}

int main(){

  fnc();

return 0;
}
