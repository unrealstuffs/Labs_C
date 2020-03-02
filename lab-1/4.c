#include <stdio.h>
#include <math.h>

int main() {
    int n, counter, a;
    counter = 0;
    printf("Введите n: "); scanf("%i", &n);

    for(int i = 0; i < n; i++) {
        printf("Введите a: "); scanf("%i", &a);

        if(a % 2 != 0) {
            counter++;
        }
    }

    printf("Количество нечетных чисел: %i \n", counter);

    return 0;
}