//Given an array of integers arr[], the task is to move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.
#include<stdio.h>
int main()
{
 int arr[]={1,2,0,4,3,0,5,0};
 int n=sizeof(arr)/sizeof(arr[0]);
 int j=0;
  int ans[n];
 for(int i=0;i<n;i++){
  if(arr[i]!=0)
    ans[j++]=arr[i];
 }
for(int k=j;k<n;k++){
 ans[k]=0;
} 
  for(int i=0;i<n;i++){
  printf("%d ",ans[i]);
 }
 return 0;

}








