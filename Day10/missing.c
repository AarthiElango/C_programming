#include <stdio.h>

int main(){
   int n,sum=0;
  printf("enter n\n");
  scanf("%d",&n);
  int arr[n];
  //input arr values
  for(int i=0;i<n-1;i++){
   scanf("%d",&arr[i]);
  }
  //printing values
   for(int i=0;i<n-1;i++){
   printf("%d ",arr[i]);
   }
  
   int total=(n*(n+1))/2;
   for(int i=0;i<n-1;i++){
    sum += arr[i];
   }

   printf("missing value is %d\n",total-sum);

}
