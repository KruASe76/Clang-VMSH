#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Rus");

    int num;

    printf("Введите количество апельсинов:\n");
    scanf("%d", &num);
    unsigned uns_num = abs(num); // А вдруг Вы введете отрицательное число?

    int sw;
    if (uns_num%10 == 1 && uns_num%100/10 != 1) {
        sw = 1;
    } else if ((uns_num%10 == 2 || uns_num%10 == 3 || uns_num%10 == 4) && uns_num%100/10 != 1) {
        sw = 2;
    } else {
        sw = 0;
    }

    switch (sw) {
    case 0:
        printf("\n%d апельсинов\n", num);
        break;
    case 1:
        printf("\n%d апельсин\n", num);
        break;
    case 2:
        printf("\n%d апельсина\n", num);
        break;
    
    default:
        printf("\nЕррор\n");
        break;
    }
}