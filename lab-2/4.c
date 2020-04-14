// 7 вариант 4 задание

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, m, i, j, min = 2147483647, max = -2147483647;

    printf("Введите порядок матрицы: "); scanf("%i", &n);
    int a[n][n];

    // Заполняем матрицу
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = rand() % 200 + (-100);
        }
    }

    // Вычисляем максимум и минимум
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (((i - j + n / 2) <= 0) && ((i + j - n / 2) <= 0)) { // Условие принадлежности элемента к заштрихованной части
                if (a[i][j] > max) {
                    max = a[i][j];
                }
            }
            else {
                if (a[i][j] < min) {
                    min = a[i][j];
                }
            }
        }
    }

    printf("Максимальный элемент: %i \n", max);
    printf("Минимальный элемент: %i \n", min);

    return 0;
}