#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    int num1 = num/1000, num2 = num/100 % 10, num3 = num/10 % 100, num4 = num % 1000;
    int sum = num1 + num2 + num3 + num4;
    int prod = num1 * num2 * num3 * num4;

    printf("\nSum of digits: %d\nProduct of digits: %d\n", sum, prod);
    printf("\nSum of digits: %o (oct)\nProduct of digits: %x (hex)\n", sum, prod);
}