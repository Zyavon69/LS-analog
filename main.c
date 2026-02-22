#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[40] = "Hello, duo";
    char str2[10] = " help";

    unsigned long nullterm = strlen(str1);

    for (int i =0; i < 40; i ++) {
        if (str1[i] == '\0') {
            str1[i] = str2[0 + i - nullterm ];
        }
    }

    for (int i = 0; i < 40; i++) {
        printf("%c",(int)str1[i]);
    }
}

