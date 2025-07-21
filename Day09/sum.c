#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize);

int main() {
    int nums[] = {1, 2, 3, 4}; 
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* ans = runningSum(nums, numsSize, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}


int* runningSum(int* nums, int numsSize, int* returnSize) {
     int *ans=(int *)malloc(numsSize*sizeof(int));
     int sum=0;
     for(int i=0;i<numsSize;i++){
         sum=sum+nums[i];
         ans[i]=sum;
     }
     *returnSize=numsSize;
     return ans;
}
