#include <stdio.h>
int large(int *arr,int n);
int main(){
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  int arr[n];
  //input arr values
  for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
  }
  int max=arr[0],sec=arr[0];
  for(int i=1;i<n;i++){
   if(arr[i]>max){
     sec=max;
     max=arr[i];
     
   }
   else if(arr[i]<max && arr[i]>sec){
       sec=arr[i];
    }
    
  }

  printf("Second largest:%d\n",sec);

 }






