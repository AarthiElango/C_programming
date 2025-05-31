#include <stdio.h>
void main()
{
  int a=10,b=20,temp;
  printf("a=%d\tb=%d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("a=%d\tb=%d\n",a,b);

}
