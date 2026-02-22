#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 1. Первый malloc — получим свежую память от ОС (скорее всего нули)
    char *first = malloc(10);
    printf("Первый malloc (свежая память):\n");
    for(int i = 0; i < 10; i++) {
        printf("first[%d] = %d\n", i, first[i]);
    }
    
    // 2. Пишем туда какие-то данные
    for(int i = 0; i < 10; i++) {
        first[i] = i + 65;  // 'A', 'B', 'C'...
    }
    printf("\nПосле записи:\n");
    for(int i = 0; i < 10; i++) {
        printf("first[%d] = %d ('%c')\n", i, first[i], first[i]);
    }
    
    // 3. Освобождаем — теперь этот блок в списке свободных
    free(first);
    
    // 4. Второй malloc — скорее всего получим ТОТ ЖЕ САМЫЙ блок
    char *second = malloc(10);
    printf("\nВторой malloc (повторное использование):\n");
    for(int i = 0; i < 10; i++) {
        printf("second[%d] = %d", i, second[i]);
        if (second[i] >= 32 && second[i] <= 126) {
            printf(" ('%c')", second[i]);
        }
        printf("\n");
    }
    
    free(second);
    return 0;
}