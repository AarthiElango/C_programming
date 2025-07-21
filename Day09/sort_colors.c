
#include <stdio.h>
#include <stdlib.h>
void sortColors(int* nums, int numsSize);

int main() {
    int nums[] = {2, 0, 2, 1, 1, 0};  
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    sortColors(nums,numsSize);
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}

void sortColors(int* nums, int numsSize) {
   int cnt[3]={0};
   for(int i=0;i<numsSize;i++){
     int n=nums[i];
     cnt[n]++;
   }
   int k=0;
   for(int i=0;i<3;i++){
    while(cnt[i]!=0){
        nums[k++]=i;
        cnt[i]--;
    }
   }
}
