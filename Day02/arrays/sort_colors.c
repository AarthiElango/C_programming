//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
#include <stdio.h>
int rmv(int arr[],int n);
void sort(int arr[],int n);
int main()
{ 
  int numsSize;
  printf("Enter value of n:");
  scanf("%d",&numsSize);
  int nums[numsSize];
  for(int i=0;i<numsSize;i++){
   scanf("%d",&nums[i]); 
  }
  //calculate count in an array
  int cnt[3]={0};
   for(int i=0;i<numsSize;i++){
     int n=nums[i];
     cnt[n]++;
   }
   //insert value using count value 
   int k=0;
   for(int i=0;i<3;i++){
    while(cnt[i]!=0){
        nums[k++]=i;
        cnt[i]--;
    }
   }
   //print new array
  for(int i=0;i<numsSize;i++){
	printf("%d ",nums[i] );
  }
  return 0;
}




