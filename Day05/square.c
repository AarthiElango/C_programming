//Write a program in C to find the square of any number using the function.



#include <stdio.h>
int squ(int n);

int main(){
 int n;
 scanf("%d",&n);
 printf("square of %d is %d\n",n,squ(n));
 return 0;
}

int squ(int n)
{
  return n*n;
}
