#include<stdio.h>
fnc(char str[]){
int i,len=0;
while(str[i]!='\0'){
    i++;
    len++;
}
printf("length: %d\n",len);
}



int main(){
  char str[100];

  printf("enter any string: ");
  gets (str);

  fnc(str);
  return 0;
  }
