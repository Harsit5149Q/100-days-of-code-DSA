#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    // 1. Calculate expected sum from 1 to n using long long to avoid overflow
    long long expectedSum = (long long)n * (n + 1) / 2;
    
    // 2. Calculate actual sum of array elements
    long long actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }
    
    // 3. The difference is the missing number
    return (int)(expectedSum - actualSum);
}

int main() {
    int arr[] = {8, 2, 4, 5, 3, 7, 1};
    int n = 8; // Total elements should be 8
    printf("Missing Number: %d\n", findMissingNumber(arr, n)); // Output: 6
    return 0;
}
