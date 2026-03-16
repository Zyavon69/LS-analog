#include <stdio.h>
//#include <stdlib.h>
#include <stdlib.h>
#include <string.h>


struct Player {
    int money;
    int lvl;
};

void ch_money(struct Player player);
int* new_player();

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr_ar = arr;
    printf("sizeof - %lu, arr[0] - %d, arr[1] - %d", sizeof(ptr_ar + 1),*ptr_ar, *(ptr_ar + 1)); 
}

void ch_money(struct Player player) {
    player.money = player.money + 40;
}

int* new_player() {
    int arr[10];
    int *ptr = &arr[0];
    return ptr;
}