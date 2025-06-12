//Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.
#include<stdio.h>
int large(int arr[],int n);
int main()
{
  int arr[]={3,56,15,99,12,5,3,22,8};
  int size=sizeof(arr)/sizeof(arr[0]);
  int second_largest=large(arr,size);
  printf("%d\n",second_largest);
 return 0; 
}

int large(int arr[],int n)
{ 
  int largest=-1,second=-1;
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      second=largest;
      largest=arr[i];
    }
    else if(arr[i]<largest && arr[i]>second){
	    second=arr[i];
    }
  }
  return second;
}
