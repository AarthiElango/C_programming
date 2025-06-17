#include <stdio.h>
void concat(char *s1,char *s2);
int main()
{
 char str1[50],str2[50];
 scanf("%s  %[^\n]s ",str1,str2);
 concat(str1,str2);
 printf("%s \n",str1);
 return 0;
}

void concat(char *s1,char *s2){

   while(*s1 != '\0'){
    s1++;
   }
   while(*s2 != '\0'){
     *s1=*s2;
    s1++;
    s2++;
   } 
   *s1='\0';

}
