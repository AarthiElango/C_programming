#include<stdio.h>
int main()
{
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  int arr[n];
  //input arr values
  for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
   printf("%d ",arr[i]);
  }
  printf("\n");

  for(int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-1-i]=arr[i];
  }

  for(int i=0;i<n;i++){
   printf("%d ",arr[i]);
  }
  printf("\n");
 return 0;
}
