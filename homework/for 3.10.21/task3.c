#include <stdio.h>

void main() {
    int arr[8];

    printf("Input 8 numbers to sort (each in its own row):\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    int temp;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7-i; j++) { // Мне было лень придумывать что-то продуктивнее старого доброго пузырька
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
}