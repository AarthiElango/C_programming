#include <stdio.h>

int main()
{
  int n,m;
  printf("enter n,m:\n");
  scanf("%d %d",&n,&m);
  int arr1[n];
  //input arr1 values
  for(int i=0;i<n;i++){
   scanf("%d",&arr1[i]);
  }
 int arr2[m];
  //input arr2 values
  for(int i=0;i<m;i++){
   scanf("%d",&arr2[i]);
  }
  int len=m+n;
  int ans[len];
   for(int i=0;i<n;i++){
      ans[i]=arr1[i];
   }
   for(int i=0;i<len;i++){
     ans[n+i]=arr2[i];
   }
   //printing result
   for(int j=0;j<len;j++){
      printf("%d ",ans[j]);
  }


 
 return 0;
}



