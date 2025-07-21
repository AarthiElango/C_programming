//left rotate
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
  int ans[n];
  for(int i=0;i<n;i++){
    ans[i]=arr[(i+1)%n];
  }


  for(int i=0;i<n;i++){
   printf("%d ",ans[i]);
  }
  printf("\n");


 return 0;
}


