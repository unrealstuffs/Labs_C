#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    float sum = 0, mult = 1, max, max_index;

    printf("Введите длину массива n: "); scanf("%i", &n);
    int a[n];

    // Fill array of random numbers
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 200 + (-100);
    }
    
    // Get max element
    max = a[0];
    for(int i = 1; i < 5; i++) {
        if(a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    // Check positive and negative numbers after a[max]
    for(int i = 0; i < n; i++) {
        if(a[i] < 0 && i > max_index) {
            mult *= a[i];
        } else if(a[i] >= 0 && i > max_index) {
            sum += a[i];
        }
    }

    // Print results
    printf("Удвоенная сумма всех положительных элементов массива: %f \n", sum * 2);
    printf("Удвоенное произведение всех отрицательных элементов массива %f \n", mult * 2);
    
    return 0;
}