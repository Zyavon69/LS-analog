#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char*);
int del_space(char *ptr);
int* ptr_vis();

int main() {
    char str[100] = "hello  ";
    char *ptr = &str[0];


    for (int i = 0; i < my_strlen(ptr); i ++) {
        if (str[i + 1] != ' ') {
            char temp = str[i + 1];
            str[i + 1] = str[i];
            str[i] = temp;
        }
    }

    for (int i = 0; i < 20; i ++) {
        printf("%c ", str[i]);
    }

    while(1) {
        printf(" ");
        int count =0;
        int *ptr = &count;
        
        
        while (*ptr <= 10000) {
            *ptr = *ptr + 1;
            printf("%d ", *ptr);
        }
        if (*ptr == 10000) {
            break;
        }
    }
    
    printf("%d",*ptr_vis());

    int* p = ptr_vis();

    printf("%d",*p);
}

int my_strlen(const char *ptr) {
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
