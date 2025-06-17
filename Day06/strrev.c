#include <stdio.h>
#include <string.h>

void strrev_u(char *str);

int main()
{
 char str[20];
 scanf("%s",str);
 printf("Before:%s\n",str);
 strrev_u(str);
 printf("After:%s\n",str);


 return 0;
}

void strrev_u(char *str)
{
  int n=strlen(str);
  for(int i=0;i<n/2;i++){
  char temp=*(str+i);
  *(str+i)=*(str+n-i-1);
  *(str+n-i-1)=temp;
  }
}
