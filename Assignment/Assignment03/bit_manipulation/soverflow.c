#include <math.h>
#include <stdio.h>
#include <limits.h>
int main()
{
 int n,ns;
 n=INT_MAX;
 ns=n+1;
 if(n>0 & ns<0)
    printf("Overflow detected\n");
 else
   printf("No overflow\n");
 printf("%d %d\n",n,ns); 
 return 0;
}
