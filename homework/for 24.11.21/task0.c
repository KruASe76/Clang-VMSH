#include <stdio.h>

double pow3(double);

void main() {
    double num;
    printf("Input number to power it to the third degree:\n>> ");
    scanf("%lf", &num);

    double pow_num = pow3(num);

    printf("\nResult:\n%lf", pow_num);
}

double pow3(double num) {
    return num * num * num;
}