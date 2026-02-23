#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, duo";
    char str2[10] = " help ";

    unsigned long nullterm = strlen(str1);

    for (int i =0; i < sizeof(str1); i ++) {
        if (nullterm + strlen(str2 + 1) > sizeof(str1)) {
            printf("Строка выходит за размер массива");
            break;
        } else {
            if (str1[i] == '\0') {
                str1[i] = str2[0 + i - nullterm ];
                if (nullterm + strlen(str2 + 1) <= i) {
                    break;
                }
            }
        }
    }

    
    for (int i =0; i < 100; i ++) {
        printf("%c", str1[i]);
    }
}

