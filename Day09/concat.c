#include <stdio.h>
#include <stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) ;

int main() {
    int nums[] = {1, 2, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* ans = getConcatenation(nums, numsSize, &returnSize);

   
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }
    free(ans);
    return 0;
}

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *ans=(int *)malloc((2*numsSize)*sizeof(int));
    *returnSize=2*numsSize;
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[i];
        ans[i+numsSize]=nums[i];
    }
    return ans;
}

