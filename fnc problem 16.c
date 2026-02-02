#include<stdio.h>
void fnc(int ary[],int size){

    int i;
    for(i=0;i<size;i++){
    ary[i]*=2;
   }

}

int main(){
    int size;
    printf("enter any size: ");
    scanf("%d",&size);
    int ary[size],i;
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }
  fnc(ary,size);

for(i=0;i<size;i++){
    printf("%d ",ary[i]);
}
return 0;
}
