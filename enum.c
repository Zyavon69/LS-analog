#include <stdio.h>
#include <string.h>
enum Word_Types {
    Adj,Sub,Verb, Noun, NUL
};

struct Token {
    enum Word_Types tokentypes;    
    char *value;
};

int main() {
    char str[10] = "Walk";
    char *pstr = &str[0];
    enum Word_Types adj = Adj;
    enum Word_Types sub = Sub;
    enum Word_Types verb = Verb;
    enum Word_Types noun = Noun;
    enum Word_Types nul = NUL;

    struct Token token;

    if (strcmp(pstr, "Beautiful") == 0 || strcmp(pstr, "Ugly") == 0 || strcmp(pstr, "Obsessive") == 0) {
        token.tokentypes = adj;
        token.value = pstr;
    } else if (strcmp(pstr, "I") == 0 || strcmp(pstr, "You") == 0 || strcmp(pstr, "We") == 0 ) {
        token.tokentypes = sub;
        token.value = pstr;
    } else if (strcmp(pstr, "Take") == 0 || strcmp(pstr, "Sit") == 0 || strcmp(pstr, "Walk") == 0 ) {
        token.tokentypes = verb;
        token.value = pstr;
    } else if (strcmp(pstr, "Tragg") == 0 || strcmp(pstr, "Dog") == 0 || strcmp(pstr, "Cat") == 0 ) {
        token.tokentypes = noun;
        token.value = pstr;
    } else  {
        token.tokentypes = nul;
        token.value = pstr;
    }

    printf("%d", token.tokentypes);
}
