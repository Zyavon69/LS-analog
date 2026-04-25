#include "stdio.h"
#include <assert.h>
#include <string.h>
void del_space(char *str, char *buff, char *del);
int main() {
    char str[20] = "I walk for you";
    char *ptr = &str[0];
    char buff[20];
    char *pduf = &buff[0];
    char dell[2] = " ";
    char *pdel = &dell[0];
     
    del_space(ptr, pduf, pdel);

    for (int i = 0; i < 20; i ++) {
        printf("%d ", buff[i]);
    }
}

void del_space(char *str, char *buff, char *del) {
    static char *read;
    read = str;
    static char *write;
    write = str;
    int i = 0; int j = 0;
    

    while (read[i] != '\0') {
        if (read[i] != del[0]) {
            buff[j] = write[i];
            j++;
        } else {
            buff[j] = '\0';
            j++;   
        }
        i++;
        
    }

}

