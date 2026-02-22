#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[10] = "hello";
    char *e = malloc(sizeof(str));

    for (int i = 0; i < 10; i++) {
        printf("index: %d - elements: %d\n",i,e[i]);
    }

    strcpy(e, str);

    printf("Инициализированная часть:\n");
    for(int i = 0; i <= 5; i++) {
        printf("str[%d] = %d ('%c')\n", i, str[i], 
               str[i] >= 32 ? str[i] : '?');
    }
    
    printf("\nМусор за пределами строки:\n");
    for(int i = 6; i < 10; i++) {
        printf("str[%d] = %d", i, str[i]);
        if (str[i] >= 32 && str[i] <= 126) {
            printf(" ('%c')", str[i]);
        }
        printf("\n");
    }
    
    free(e);

    // Первый запуск
    /*char *first = malloc(10);
    for(int i = 0; i < 10; i++) {
        printf("%d ", first[i]);
    }
    printf("\n");
    free(first);*/
    
    // Второй запуск - та же программа
    char *second = malloc(10);
    for(int i = 0; i < 10; i++) {
        printf("%d ", second[i]);
    }
    printf("\n");
    free(second);
    return 0;
}