// 3 лаба вариант №7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *input, *output;
    int count = 0;
    int ind;
    char *ach;
    char ch;
    // пары открывающих-закрывающих скобок
    char br[] = "()[]{}";
    int stackSize = 1;
    // стек открытых скобок
    char st[stackSize];

    // Проверка файла
    if((input = fopen("input.txt", "r")) == NULL) {
        printf("Ошибка при открытии файла input.txt \n");
        return 0;
    }
    output = fopen("output.txt", "w");


    // В цикле проходим по каждому символу
    while(fscanf(input, "%c", &ch) != EOF) {
        // Ищем символ в скобках
        ach = strchr(br, ch);
        ind = ach - br + 1;
        // Если скобка найдена
        if(ach != NULL && ind >= 0) {
            // Проверяем, какая это скобка
            if(ind % 2 != 0) {
                // Если закрывающая, то проверяем стек

                // Стек пуст
                if(!strlen(st)) {
                    fprintf(output, "Неправильно");
                    return 1;
                }

                // Извлекаем последнюю открытую скобку из стека
                char last_br = st[strlen(st)];

                // Если она не соответствует закрывающей скобке
                if(last_br != br[ind - 1]) {
                    fprintf(output, "Неправильно");
                    return 1;
                }
            } else {
                // Открывающую скобку помещаем в стек
                st[strlen(st)] = ch;
            }
        } 
    }
    // если после обхода всей строки стек пуст - всё ок
    fprintf(output, "Правильно");

    fclose(input);
    fclose(output);

    return 0;
}