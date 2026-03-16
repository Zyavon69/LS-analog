#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strcnpy-analog.h"
char* ref_arr(char *str[10]);

int main() {
    int *x[10];
    int y[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 10; i ++) {
        printf("y[%d] - %p\n", i, &y[i]);
    }

    printf("\n");
    
    for (int i = 0; i < 10; i ++) {
        *(x + i) = &y[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("x[%d] - %p\n", i, x[i]);
    }
    return 0; 
}

char* ref_arr(char *str[10]) {
    char str1[100] = "hello пидорас у тебя мать проститутка";
    char *ptr = &str1[0]; 
    int a = my_strlen(ptr);
    
    for (int i = 0; i < a;i++) {
        *(str + i) = &str1[i];
    }
}