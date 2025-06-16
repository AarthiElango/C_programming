#include<stdio.h>
int main()
{
 int n,sum=0;
 printf("enter n :\n");
 scanf("%d",&n);
 int arr[n];
 for(int k=0;k<n;k++)
 {
  scanf("%d",&arr[k]);
 
 }

 for(int i=0;i<n;i++)
 {
   sum^=arr[i];
 }

 printf("once appeared val=%d\n",sum);
}
