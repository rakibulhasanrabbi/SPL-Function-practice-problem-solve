#include<stdio.h>
float fnc(char a[100],char b[100]){
int lenA=strlen(a);
int lenB=strlen(b);
int i,j;
  for(i=0;i<=lenA-lenB;i++){
        for(j=0;j<lenB;j++){
                if(a[i+j] !=b[j]){
                        break;
                }
        }

      if(j==lenB){
        return 1;
  }
}

return -1;
}


int main(){
    char a[100], b[100];

    printf("Enter string a: ");
    gets (a);

   printf("Enter string b: ");
   gets(b);
   int res=fnc(a,b);
   if(res==1)
      printf("1\n");
   else
    printf("0\n");

  return 0;
}
