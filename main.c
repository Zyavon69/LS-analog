#include "stdio.h"

int main() {
    unsigned int a = 89;
    printf("Hello, world %d\n", a);
    unsigned int* b;
    b = &a;
    *b += 10;
    /*while (1) {
        int nums[] = {1,2,3,4,5};
        int* u;
        u = &nums;
        *u = nums[0];
        printf("%p\n",u);
    }*/

    int value = getchar();

    int* n= &value;

    //printf("%p", n);
    //int dsdasdjasjdar(value);

    printf("%d", value);
}