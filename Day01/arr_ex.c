#include <stdio.h>
void main(){
 // int arr[]={1,2,3,4,5,5,4,5,6,6,3,4,8,10,10,43,432,12,4321,5,2,5,11,5,98,44,56,22,89,1111,11,33,11,133,90,76};
  int i;
  int arr[]={22,44,55};
  //int arry[j];
 // printf("size of int %lu arr %lu",sizeof(int),sizeof(arr));
  int len=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<len;i++){
   printf("%d",arr[i]); 
  }





}
