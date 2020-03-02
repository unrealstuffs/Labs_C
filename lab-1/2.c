#include <stdio.h>
#include <math.h>

int f(int x) {
    if(x >= -2 && x <= 2) {
        return x * x;
    } else {
        return 4;
    }
}

int main() {
    int a, x;

    printf("Введите a: "); scanf("%i", &a);
    printf("f(x) = %i \n", f(a));

    return 0;
}