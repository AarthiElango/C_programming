#include <stdio.h>
#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize);

int main() {
    int nums[] = {0, 2, 1, 5, 3, 4}; 
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* ans = buildArray(nums, numsSize, &returnSize); 
    for (int i = 0; i < returnSize; i++) {
        printf("%d", ans[i]);
    }
   return 0;
}

int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *ans=(int *)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[nums[i]];
    }
    *returnSize=numsSize;
    return ans;
}
