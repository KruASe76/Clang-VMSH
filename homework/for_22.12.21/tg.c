#include <stdio.h>
#include <math.h>

double bernulli(int);
int factorial(int);
double power(double, int);

double f(double, int);
double tg(double);


int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return -1;
    }
    if (n == 1) {
        return 1;
    }
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

double power(double x, int n) {
    if (n == 0) {
        return 1.;
    }
    double res = 1.;
    for (int i = 0; i < n; i++) {
        res *= x;
    }
    return res;
}


void main() {
    printf("something");
}