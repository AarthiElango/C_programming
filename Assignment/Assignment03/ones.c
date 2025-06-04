#include<stdio.h>
int main()
{
  int n;
  int count=0;
  scanf("%d",&n);
  for(int i=0;i<sizeof(n)*8;i++){
   if(n& (1<<i) !=0)
     count++;
  }
  printf("%d\n",count);
  return 0;
}
