#include <stdio.h>
#include <stdbool.h>


#define MAX_ITEMS 5
#define MAX_WEIGHT 20

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapSack(int weights[], int values[], int selected_bool[]) {
    int i, w;
    int K[MAX_ITEMS + 1][MAX_WEIGHT + 1];

    // Initialize K matrix
    for (i = 0; i <= MAX_ITEMS; i++) {
        for (w = 0; w <= MAX_WEIGHT; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (weights[i - 1] <= w)
                K[i][w] = max(values[i - 1] + K[i - 1][w - weights[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    // Backtrack to find selected items
    w = MAX_WEIGHT;
    for (i = MAX_ITEMS; i > 0 && w > 0; i--) {
        if (K[i][w] != K[i - 1][w]) {
            selected_bool[i - 1] = true;
            w -= weights[i - 1];
        }
    }

    return K[MAX_ITEMS][MAX_WEIGHT];
}


int main() {
    int values[MAX_ITEMS];
    int weights[MAX_ITEMS];
    int selected_bool[MAX_ITEMS] = {0};
    int maxValue;

    // Input items' values and weights
    for (int i = 0; i < MAX_ITEMS; i++) {
        char item;
        int value, weight;
        scanf("%d", &value);
        scanf("%d", &weight);

        values[i] = value;
        weights[i] = weight;
    }

    // Determine maximum profit and selected items
    maxValue = knapSack(weights, values, selected_bool);

    // Print maximum profit
    printf("Maximum profit: %d\n", maxValue);

    // Print selected items
    printf("Items that give the maximum profit: [");
    bool first = true;
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (selected_bool[i]) {
            if (!first) printf(", ");
            printf("%c", 'A' + i);
            first = false;
        }
    }
    printf("]\n");

    return 0;
}
