#include "stdio.h"

int mySqrt(int a) {
    if (a == 1 || a == 0) return a;
    
    int left = 1, right = a, ans = 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= a / mid) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}

int main(void) {
    int b1 = mySqrt(4);
    printf("%d\n", b1); // must be 2
    
    int b2 = mySqrt(8);
    printf("%d\n", b2); // must be 2
}