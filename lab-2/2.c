// 7 вариант 2 задание

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    float sum = 0, mult = 1, max, max_index;

    printf("Введите длину массива n: "); scanf("%i", &n);
    int a[n];

    // Заполняем массив случайными числами
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 200 + (-100);
    }
    
    // Получаем максимальный элемент
    max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    // Умножаем элементы на a[i]
    for(int i = 0; i <= n; i += 2) {
        if(i < max_index) {
            a[i] *= max;
        }
    }

    // Выводим конечный массив
    for(int i = 0; i < n; i++) {
        printf("%d \n", a[i]);
    }
    
    return 0;
}