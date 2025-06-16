#include <stdio.h>
int main()
{
 int n;
 printf("enter n:\n");
 scanf("%d",&n);
 int arr[n-1];
 //input
 for(int i=0;i<n-1;i++)
 { 
   scanf("%d",&arr[i]);
 }

 int sum=0;
 for(int i=0;i<n-1;i++)
 { 
  sum+=arr[i]; 
 }
 int total=(n*(n+1));
 printf("missing number is :%d\n",total-sum);



}
