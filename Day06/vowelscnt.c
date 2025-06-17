#include <stdio.h>
int main()
{
 char str[100];
 scanf("%s",str);
  char *ptr=str;
   int cnt=0;
  while(*ptr!='\0'){
   char ch=*ptr;
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    cnt++;
   }
   ptr++;
  
  }
  printf("vowels in %s is %d\n",str,cnt);
 return 0;
}
