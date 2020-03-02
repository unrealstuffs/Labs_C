#include <stdio.h>
#include <math.h>

int main() {
    int number, counter, k;
    counter = 0;

    printf("Введите число: "); scanf("%i", &number);
    printf("Введите k: "); scanf("%i", &k);

    for(int i = 1; i <= number; i++) {
        if(i % 2 != 0 && number % i == 0 && i > k) {
            counter++;
        }
    }
    printf("Количество: %i \n", counter);
    return 0;
}