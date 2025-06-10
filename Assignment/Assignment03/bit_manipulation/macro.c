#include <stdio.h>
#define nbit(n,pos) ((n>>pos)&1)
int main()
{
 int n,pos,val;
 scanf("%d %d",&n,&pos);
 val=nbit(n,pos);
 printf("%d\n",val);
 return 0;
}
