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
