#include<stdio.h> 
int  main() 
{ 
   unsigned int x = -1; 
   printf("%d\n%u\n",x,x);
   int y = ~0; 
   printf("%d\n %u\n",y,y);
   if (x == y) 
      printf("same"); 
   else
      printf("not same"); 
   return 0; 
}
