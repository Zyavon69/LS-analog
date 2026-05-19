
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

    printf("%d\n", token_arr.arr[3].tokentypes);
    printf("%c", *token_arr.arr[0].value);
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
    char *write_start = &buffer[0];
    char *word;
    word = read;
    int k = 0;
    while (*read != '\0') {
        if (*read != ' ' && *read != '\0') {
            //word = read;
            *write = *read;
            write++;
            read ++;
            } else {
            *write = '\0';
            if (strcmp(write_start, "Beautifull") == 0 || strcmp(write_start, "Grown") == 0) {
                array_tokens->arr[k].tokentypes = adj;
                array_tokens->arr[k].value = word;
                k += 1;
            } else if (strcmp(write_start, "you") == 0 || strcmp(write_start, "cat") == 0) {
                array_tokens->arr[k].tokentypes = sub;
                array_tokens->arr[k].value = word;
                k += 1;
            } else if (strcmp(write_start, "take") == 0 || strcmp(write_start, "go") == 0) {
                array_tokens->arr[k].tokentypes = verb;
                array_tokens->arr[k].value = word;
                k += 1;
            } else if (strcmp(write_start, "I") == 0 || strcmp(write_start, "we") == 0) {
                array_tokens->arr[k].tokentypes = noun;
                array_tokens->arr[k].value = word;
                k += 1;
            } else {
                array_tokens->arr[k].tokentypes = nul;
                array_tokens->arr[k].value = word;
                k += 1;
            }
            write = write_start;
            read += 1;
            word = read;
        }
    }
    if (write != write_start) {
        *write = '\0';
        if (strcmp(write_start, "Beautifull") == 0 || strcmp(write_start, "Grown") == 0) {
            array_tokens->arr[k].tokentypes = adj;
            array_tokens->arr[k].value = word;
            k += 1;
        } else if (strcmp(write_start, "you") == 0 || strcmp(write_start, "cat") == 0) {
            array_tokens->arr[k].tokentypes = sub;
            array_tokens->arr[k].value = word;
            k += 1;
        } else if (strcmp(write_start, "take") == 0 || strcmp(write_start, "go") == 0) {
            array_tokens->arr[k].tokentypes = verb;
            array_tokens->arr[k].value = word;
            k += 1;
        } else if (strcmp(write_start, "I") == 0 || strcmp(write_start, "we") == 0) {
            array_tokens->arr[k].tokentypes = noun;
            array_tokens->arr[k].value = word;
            k += 1;
        } else {
            array_tokens->arr[k].tokentypes = nul;
            array_tokens->arr[k].value = word;
            k += 1;
        }
    }    

    for (int i = 0; i < 15; i ++) {
        printf("%c\n", buffer[i]);
    }
}