#include<stdio.h>
float fnc(float ary[],int size){
float sum=0.0;
int i;
for(i=0;i<size;i++){
  sum+=ary[i];
  }
  return sum/size;
}
float fnc2(float ary[],int size){
    float f1=fnc(ary,size);
    float sum=0.0;
    int i;
  for(i=0;i<size;i++){
        float diff=ary[i]-f1;
    sum+=diff*diff;
}
return sqrt(sum/size);
}


int main(){
    int size;
    printf("Enter any size: ");
    scanf("%d",&size);

 float ary[size];
    for(int i=0;i <size; i++){

scanf("%f",&ary[i]);
 }
 float total=fnc2(ary,size);
 printf("Total dev: %f\n\n",total);

return 0;
}
