#include <stdio.h>
void main(){
   char *ptr='c';
   printf("%c\t%p",*ptr,ptr);

   printf("%c\n",*&*& *ptr);
   printf("%c\n",ptr);
   char *ptc;
   ptc='H';
   printf("%c\t %c\n",ptc,*ptc);



     }
