#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // Update the lowest price found so far
        if (prices[i] < min_price) {
            min_price = prices[i];
        } 
        // Calculate profit if we sold today and update max_profit
        else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }

    return max_profit;
}

int main() {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);
    printf("Example 1 Profit: %d\n", maxProfit(prices1, size1)); // Output: 5

    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);
    printf("Example 2 Profit: %d\n", maxProfit(prices2, size2)); // Output: 0

    return 0;
}
