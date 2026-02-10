#include "stdio.h"

int main() {
    unsigned int a = 89;
    printf("Hello, world %d\n", a);
    int* b;
    b = &a;
     *b += 10;
    int nums[] = {1,2,3,4,5};
    int* u;
    u = &nums;
    *u = nums[0];
    printf("%p\n",u);
    *u = nums[1];
    printf("%p",u);
}
