#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "stdio.h"
/*void ffunc(char *word[10]);

void ffunc(char *word[10]) {
    free(*word[0]);
}*/

int main() {
    float a = 10;

    int *b = &a;

    *b = *b + 10;
    //*((int*)n) = *n + 10;

    int v[5] = {10,20,30,79,90};

    int *y = v;

    int *c = &v[0];

    int *i = &v[0 + 5];

    printf("%p\n",i);
    printf("%p\n", c);

    printf("%f",a);
}