#include "stdio.h"
#include <stdio.h>

int missingNumber(int *nums, int numsSize) {
    int sum = 0;

    for (int i = 0; i <= numsSize - 1; i++) {
        sum = sum + nums[i];
    }

    return ((numsSize * (numsSize + 1)) / 2) - sum;
}

int main(void) {
    int nums[3] = {3, 0, 1};
    int r = missingNumber(nums, sizeof(nums) / sizeof(nums[0]));
    
    printf("%d\n", r); // must be 2
}