#include<stdio.h>
int main()
{
  int num,cnt=0,i=0;
  scanf("%d",&num);
  int n=sizeof(num)*8;
  while(((num>>i)&1)!=1 && (i<n) ){
  cnt++;
  i++;
  }
  printf("%d\n",cnt);
  return 0;
}
