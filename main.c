#include "stdio.h"
int iopdd(int*);

int main() {
    printf("Hello, world\n");
    int b = 90;
    iopdd(&b);
    printf("%d",b);
    return 0;
}

int iopdd(int* b) {
    b = b + 10;
    return *b;
}
