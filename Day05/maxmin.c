#include <stdio.h>
void minmax(int * arr,int n,int* ans);

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int ans[2];
  minmax(arr,n,ans);
  printf("min=%d max=%d\n",ans[0],ans[1]);
  return 0;
}

void minmax(int* arr,int n,int* ans )
{
 int min=arr[0],max=arr[0];
 for(int i=1;i<n;i++){
   if(arr[i]>max)
   {
    max=arr[i];
   }
   if(arr[i]<min){
    min=arr[i];
   }
 }
 ans[0]=min;
 ans[1]=max;
 

}
