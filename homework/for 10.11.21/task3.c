#include <stdio.h>

void main() {
    char arr[16][17] = {{" "}}; // 17 из-за терминатора
    int n;

    printf("Input 16 numbes, each from 0 to 16:\n");
    for (int i = 0; i < 16; i++) {
        scanf("%d", &n);

        if (n < 0 || n > 16) {
            printf("Warning: the number has to be from 0 to 16\n");
        } else {
            for (int j = 0; j < n; j++) {
                arr[i][j] = (char)42; // "*" symbol
            }
        }
    }

    printf("\n");
    for (int i = 0; i < 16; i++) {
        printf("%s\n", arr[i]);
    }
}