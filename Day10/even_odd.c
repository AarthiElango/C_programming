#include <stdio.h>

int main(){
  int n,even=0,odd=0;
  printf("enter n\n");
  scanf("%d",&n);
  int arr[n];
  //input arr values
  for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
  }
  //printing values
   for(int i=0;i<n;i++){
   printf("%d ",arr[i]);
   }
   printf("\n");
   
   for(int i=0;i<n;i++){
     if(arr[i]%2==0) even++;
     else odd++;
   }
   printf("odd elements = %d \neven elements = %d\n",odd,even);
 return 0;
}

