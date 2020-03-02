#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float x, y, z, a, b;

    printf("x = "); scanf("%f", &x);
    printf("y = "); scanf("%f", &y);
    printf("z = "); scanf("%f", &z);

    a = (sqrt(abs(x - 1)) - cbrt(abs(y))) / 1 + (pow(x, 2) / 2) + (pow(y, 2) / 4);

    if(z <= 1 && z >= -1) {
        b = x * (asin(z) + exp(-(x + 3)));
    } else {
        printf("Значение z не входит в допустимый диапазон \n");
        return 1;
    }

    printf("1: %f \n", a);
    printf("2: %f \n", b);

    return 0;
}