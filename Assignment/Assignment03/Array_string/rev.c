#include <stdio.h>
#include<string.h>
int main()
{
 
 char str[]="Welcomes You";
 printf("%s\n",str);
 int n=strlen(str);
 for(int i=0;i< (n-1)/2;i++)
 {
   char temp=str[i];
   str[i]=str[n-1-i];
   str[n-1-i]=temp;
 }
 printf("%s\n",str);
 return 0;
}
