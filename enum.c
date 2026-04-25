
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
int main() {
    char str[10] = "Walk";
    char *ptr = &str[0];
    char str1[10] = "Go";
    char *string[100] = {&str[0],&str1[0]};
    for (int i = 0; i < 2; i ++) {
        for (int j = 0; j < 10; j ++)
        printf("%c\n", string[i][j]);
    }
    struct Token token;
    struct Token_Array tokens;

    tokenize(&tokens, ptr);
    
    for (int i = 0; i < 100; i ++) {
        printf("%d", tokens.arr[i].tokentypes);
    }
}

void tokenize(struct Token_Array *array_tokens, char *pstr) {
    enum Word_Types adj = Adj;
    enum Word_Types sub = Sub;
    enum Word_Types verb = Verb;
    enum Word_Types noun = Noun;
    enum Word_Types nul = NUL;

    if (strcmp(pstr, "Beautiful") == 0 || strcmp(pstr, "Ugly") == 0 || strcmp(pstr, "Obsessive") == 0) {
        array_tokens->arr[0].tokentypes = adj;
        array_tokens->arr[0].value = pstr;
    } else if (strcmp(pstr, "I") == 0 || strcmp(pstr, "You") == 0 || strcmp(pstr, "We") == 0 ) {
        array_tokens->arr[1].tokentypes = sub;
        array_tokens->arr[1].value = pstr;
    } else if (strcmp(pstr, "Take") == 0 || strcmp(pstr, "Sit") == 0 || strcmp(pstr, "Walk") == 0 ) {
        array_tokens->arr[2].tokentypes = verb;
        array_tokens->arr[2].value = pstr;
    } else if (strcmp(pstr, "Tragg") == 0 || strcmp(pstr, "Dog") == 0 || strcmp(pstr, "Cat") == 0 ) {
        array_tokens->arr[3].tokentypes = noun;
        array_tokens->arr[3].value = pstr;
    } else  {
        array_tokens->arr[4].tokentypes = nul;
        array_tokens->arr[4].value = pstr;
    }    
}