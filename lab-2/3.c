// 7 вариант 3 задание

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Введите длину массива n: "); scanf("%i", &n);
    int a[n];

    // Заполняем массив случайными числами
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 200 + (-100);
    }

    int i = 0;
    int ch;
    while(i < n) {
        if(a[i] % 2 == 0) {  // Выбираем четные элементы

            for(int j = n; j > i; j--) {
                a[j] = a[j - 1];
            }
            n++;
            if (a[i - 1] % 2 == 1) {  // Выбираем нечетный эелемент и ставим его перед четным
                ch = a[i - 1];
                a[i + 1] = ch;   
            }
        }
        i++;
    }

    // Выводим конечный массив
    for(int i = 0; i < n; i++) {
        printf("%d \n", a[i]);
    }
    
    return 0;
}