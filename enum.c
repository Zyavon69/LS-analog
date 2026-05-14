
#include <assert.h>
#include <stdio.h>
#include <string.h>
//void tokenize(struct Token_Array *array_tokens, char *pstr);

enum Word_Types {
    Adj,Sub,Verb, Noun, NUL
};

struct Token {
    enum Word_Types tokentypes;    
    char *value;
};

struct Token_Array {
    struct Token arr[100];
};

void tokenize(struct Token_Array *array_tokens, char *pstr);

void del_space(char *str, char *buff, char *del); 


int main() {
    char str[22] = "Beautifull I take cat";
    char *pstr = &str[0];
    struct Token_Array token_arr;

    tokenize(&token_arr, pstr);

    /*for (int i = 0 ; i < 22; i ++) {
        printf("%c",pstr[i]);
    }*/

    printf("\n");

    /*for (int i = 0; i < 10; i ++) {
        printf("Enum - %d value - %s\n", token_arr.arr[i].tokentypes, token_arr.arr[i].value);
    }*/
}

void tokenize(struct Token_Array *array_tokens, char *pstr) {
    enum Word_Types adj = Adj;
    enum Word_Types sub = Sub;
    enum Word_Types verb = Verb;
    enum Word_Types noun = Noun;
    enum Word_Types nul = NUL;

    char buffer[15];
    char *read = pstr;
    char *write = &buffer[0];

    int k = 0;
    while (*read != ' ') {
            *write = *read;
            write++;
            read ++;
    }    

    for (int i = 0; i < 15; i ++) {
        printf("%d", buffer[i]);
    }
}