#include "my_mat.h"
#include "stdio.h"
#include "stdlib.h"

#define INT_MAX 999999

int shortest_path(int **mat, int size, int a, int b);

void insert(int **mat, int size) {
    int weight;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
             scanf("%d", &weight);
             mat[i][j] = weight;
        }
    }
}

int has_path(int **mat, int size, int a, int b) {
    int result = shortest_path(mat, size, a, b);
    if (result == -1) {
        printf("False\n");
    } else {
        printf("True\n");
    }
    return result;
}

int shortest_path(int **mat, int size, int a, int b) {
    int **dist = malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        dist[i] = malloc(size * sizeof(int));
        for (int j = 0; j < size; j++) {
            dist[i][j] = (i == j) ? 0 : mat[i][j];
        }
    }

    for (int k = 0; k < size; k++) {
       for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
       }
    }

    int result = dist[a][b];

    for (int i = 0; i < size; i++) {
        free(dist[i]);
    }
    free(dist);

    return (result != INT_MAX) ? result : -1;
}
