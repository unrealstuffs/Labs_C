#include <stdio.h>
#include <math.h>

int fact(int i) {
    if(i == 0) return 1;
    else return i * fact(i - 1);
}

int main() {
    int n;
    float x, mult = 1.0;

    printf("Введите n: "); scanf("%i", &n);
    printf("Введите x: "); scanf("%f", &x);

    for(int k = 1; k <= n; k++) {
        mult *= (pow(1 - x, k + 1) + 1) / (pow(fact(k - 1) + 1, 2));
    }

    printf("%f \n", mult);

    return 0;
}