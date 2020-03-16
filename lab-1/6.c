#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, mult = 1.0;

    printf("Введите n: "); scanf("%i", &n);
    printf("Введите x: "); scanf("%f", &x);

    float tmp_x = (1 - x) * (1 - x);
    float tmp_k = 1;

    for(int k = 1; k <= n; k++) {
        mult *= (tmp_x + 1) / ((tmp_k + 1) * (tmp_k + 1));
        tmp_x *= (1 - x);
        tmp_k *= k + 1;
    }

    printf("%f \n", mult);

    return 0;
}