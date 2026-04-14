#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include "strcnpy-analog.h"

int my_strlen(char *ptr);
int del_space(char *ptr);
int* ptr_vis();

int main() {
    char *u[10];
    char str[10] = "hello";
    char str2[10] = "friend";

    (*u[0]) = &str;
    u[1] = &str2[0];

    printf("%c", *u[1]);
}

int my_strlen(char *ptr) {
    int count = 0;
    for (int i = 0; i < i+1;i++) {
        if (*ptr == '\0') {
            break;
        } else {
            ptr++;
            count ++;
        }
    }
    return count;
}

int del_space(char *ptr) {
    if (*ptr == '\0') {
        printf("Массив пуст");
        return 1;
    }

    char *write = &*ptr;
    char *read = &*ptr + 1;
    
    int i = 0;
    int len = my_strlen(ptr);
    while ( i < len) {
        read++;
        write++; 
        i++;
        if (*read == ' ') {
            char *temp = write;
            *(write + 1) = *temp;
            *(write) = *(write - 1);
        }
    } 
    return 0;
    
}

int* ptr_vis() {
    int *ptr = malloc(30);
    
    for (int i = 0; i < 30; i ++) {
        *(ptr + i) = i;
    }

    return ptr + 3;
}


