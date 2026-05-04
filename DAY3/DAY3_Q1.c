#include <stdio.h>

int main() {
    int n, k, i, comparisons = 0;
    int found = -1;

    // Input array size
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    scanf("%d", &k);

    // Linear Search logic
    for (i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            found = i;
            break;
        }
    }

    // Output results
    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", comparisons);

    return 0;
}
