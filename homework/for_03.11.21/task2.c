#include <stdio.h>

void main() {
    int arr[16];
    int temp;

    printf("Input 16 numbers from 0 to 15, each number in its own row:\n");

    for (int i = 0; i < 16; i++) {
        scanf("%d", &temp);
        if (temp < 0 || temp > 15) {
            arr[i] = 0;
            printf("Warning: the number has to be from 0 to 15\n");
        } else {
            arr[i] = temp;
        }
    }

    printf("\n");
    for (int i = 0; i <= 15; i++) {
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}