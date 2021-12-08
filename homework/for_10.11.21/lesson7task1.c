#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(NULL));

    int n, m;
    printf("Input amount of rows:\n");
    scanf("%d", &n);
    printf("\nInput amount of coloumns:\n");
    scanf("%d", &m);

    int **p_arr = NULL;
    p_arr = (int**) malloc(sizeof(int*) * n);
    for (int i = 0; i < m; i++) {
        p_arr[i] = (int*) malloc(sizeof(int) * m);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            p_arr[i][j] = rand();
        }
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", p_arr[i][j]);
        }
        printf("\n");
    }
}