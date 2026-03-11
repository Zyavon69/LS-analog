#include <stdio.h>
//#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

void uu(char *u) {
    malloc(sizeof(*u));
}

int main() {
   char i[6];
    while (1) {
    uu(&i);
   }
}

