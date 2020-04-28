// 4 лаба 7 вариант

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER 7

struct AEROFLOT {
    char departure[20]; // Пункт назначения
    int num_r; // Номер рейса
    char type[10]; // Тип самолета
};

int main() {
    struct AEROFLOT Aeroflot[NUMBER];
    int i = NUMBER;
    int j = 0;
    char str[10]; // Строка с которой будем сравнивать

    // Ввод данных
    for(int i = 0; i < 7; ++i) {
        printf("\nAEROFLOT %i\nВведите пункт назначения: ", i+1);
		scanf("%s", Aeroflot[i].departure);
		printf("\nВведите номер рейса: ");
		scanf("%d", &(Aeroflot[i].num_r));
		printf("\nВведите тип самолета: ");
		scanf("%s", Aeroflot[i].type);
    }

    // Сортировка по возрастанию номеров рейса
    for(i - 1; i >= 0; i--)
		for(j; j < i; j++)
			if(Aeroflot[j].num_r > Aeroflot[j + 1].num_r) {
                int temp = Aeroflot[j].num_r;
                Aeroflot[j].num_r = Aeroflot[j + 1].num_r;
                Aeroflot[j + 1].num_r = temp;
            }

    printf("Введите тип самолета: ");
	scanf("%s", str);

    int n = 0;
    for(int i = 0; i < 7; ++i) {
        if(Aeroflot[i].departure == str) {
            printf("Номер - %d. ",Aeroflot[i].num_r);
            printf("Тип - %s. ",Aeroflot[i].type);
        } else {
            n++;
        }
    }
    if(n == 7) {
        printf("Таких рейсов нет!");
    }

    return 0;
}