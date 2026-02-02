#include<stdio.h>
void fnc(int ary[],int size){

    int i,j,temp;
    for(i=0;i<=size;i++){
       for(j=i+1;j<=size;j++){
          if(ary[i]>ary[j]){
            temp=ary[i];
            ary[i]=ary[j];
            ary[j]=temp;
          }
    }

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
