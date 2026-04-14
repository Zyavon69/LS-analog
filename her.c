#include "stdio.h"

int main() {

    char arr[10] = "Hello";
    char arrt[6] = "World";

    char *(parr)[10];

    parr[0] = &arr;

}

