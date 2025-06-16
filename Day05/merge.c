#include <stdio.h>

void merge(int* arr1,int *arr2,int len);

int main(){
  int n;
  scanf("%d",&n);
  int arr1[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
  }
  int arr2[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
  }
 
  merge(arr1,arr2,n);
  return 0;
}

void merge(int* arr1,int *arr2,int len){
   int mrg[2*len];
   for(int i=0;i<len;i++)
   {
    mrg[2*i]=arr1[len-i-1];
    mrg[2*i+1]=arr2[len-i-1];
   }

    for(int i=0;i<2*len;i++)
   {
     printf("%d ",mrg[i]);
   }
   
}

