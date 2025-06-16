#include <stdio.h>
#include <stdlib.h>
int atoi_u(char* str);


int main(){
  char  str[100];

  printf("enter number\n");
  scanf("%s",str);
  int u=atoi(str);
  printf("builtin atoi fn: %d\n",u);
  int n=atoi_u(str);
  printf("manual atoi fn:%d\n",n);
  return 0;

}

int atoi_u(char* str)
{
 int i=0;
 int sum=0,sign=1;
 while(str[i]==' ') i++;
 if(str[i]=='-'){
     sign=-1;
     i++;
 }
 if(str[i]=='+'){
  i++;
 }
 while(str[i]>='0' && str[i]<='9'){
    sum=sum*10+(str[i]-'0');
    i++;
 }

 return sign*sum;
}


