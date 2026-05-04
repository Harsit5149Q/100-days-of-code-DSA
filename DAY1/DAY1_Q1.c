#include <stdio.h>

int main() {
    int arr[100];   
    int i, n, x, pos; 
    printf("Enter the number of elements in the array (max 99): ");
    scanf("%d", &n); 
    if (n >= 100) {
        printf("Array size is too large for this program.\n");
        return 1;
    } 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 
    printf("Enter the element to insert: ");
    scanf("%d", &x);

    printf("Enter the 1-based position (1 to %d) to insert the element: ", n + 1);
    scanf("%d", &pos); 
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    } 
    for (i = n; i >= pos; i--) { 
        arr[i] = arr[i - 1];
    } 
    arr[pos - 1] = x; 
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
