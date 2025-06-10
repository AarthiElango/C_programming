#include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  scanf("%s",str);
  long int a=0;
  long int b=0;
  int len=strlen(str);
  for(int i=0;i<len;  i++){
   int ch=(int)str[i];
   if(ch<64){
     a|= 1L<<ch;
   }
   else if(ch<=127){
    b|=1L<<(ch-64);
    }
  }
  for(int i=0;i<64;i++){
      if(a & (1L<<i))
	      printf("%d %c is present\n",i,i);
      if(b& (1L<<i))
               printf("%d %c is present\n",i+64,i+64);
  }
  return 0;
}
