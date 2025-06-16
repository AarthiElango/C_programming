#include <stdio.h>
int main()
{
 int n,sum;
  printf("Enter value of n:");
  scanf("%d %d",&n,&sum);
  int arr[n],ans[2]={-1,-1};
  for(int i=0;i<n;i++){
   scanf("%d",&arr[i]); 
  }
  for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
     if(arr[i]+arr[j]==sum){
      ans[0]=i;
      ans[1]=j;
     }
   }
  }
  printf("%d %d\n",ans[0],ans[1]);
  return 0;
}
