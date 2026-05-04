#include <stdio.h>

int main() {
    int n, pos;

    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the 1-based position to delete
    if (scanf("%d", &pos) != 1) return 0;

    // Shift elements left, starting from the target position
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array (now with n-1 elements)
    for (int i = 0; i < n - 1; i++) {
        printf("%d%s", arr[i], (i == n - 2) ? "" : " ");
    }
    printf("\n");

    return 0;
}
