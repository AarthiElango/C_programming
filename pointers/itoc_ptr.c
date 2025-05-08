#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512;     //internally in binary=> 10 00000000 
   x[0] = 1;    //access byte0 =>10 00000001
   x[1] = 2;    //access byte1 =>10 same value
   printf("%d\n",a);   //10 00000001 =>513 (machine dependent)
   return 0; 
}

