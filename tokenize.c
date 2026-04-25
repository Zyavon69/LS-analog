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

}

void tokenize(struct Token_Array *array_tokens, char *pstr) {
    enum Word_Types adj = Adj;
    enum Word_Types sub = Sub;
    enum Word_Types verb = Verb;
    enum Word_Types noun = Noun;
    enum Word_Types nul = NUL;
    char temp_word[15];
    static char *current_word;
    int j = 0; int o = 0;
    while (pstr[j] != '\0') {
        temp_word[o] = pstr[j];
        if (pstr[j] == '\0') {
            temp_word[o] = '\0';
            break;
        }
        j++;
    }

    if (pstr + 1 == NULL) {
        current_word  = pstr;
    }
    
    int i = 0; int k = 0;
    
    while(temp_word[i] != '\0') {
        if (strcmp(pstr, "Beautifull") == 0 || strcmp(pstr, "Ugli") == 0 || strcmp(pstr, "Large") == 0) {
            array_tokens->arr[k].tokentypes = adj;
            array_tokens->arr[k].value = pstr;
        } else if (strcmp(pstr, "river") == 0 || strcmp(pstr, "forest") == 0 || strcmp(pstr, "house") == 0) {
            array_tokens->arr[k].tokentypes = sub;
            array_tokens->arr[k].value = pstr;
        } else if (strcmp(pstr, "take") == 0 || strcmp(pstr, "sit") == 0 || strcmp(pstr, "up") == 0) {
            array_tokens->arr[k].tokentypes = verb;
            array_tokens->arr[k].value = pstr;
        } else if (strcmp(pstr, "I") == 0 || strcmp(pstr, "you") == 0 || strcmp(pstr, "cat") == 0) {
            array_tokens->arr[k].tokentypes = noun;
            array_tokens->arr[k].value = pstr;
        } else  {
            array_tokens->arr[k].tokentypes = nul;
            array_tokens->arr[k].value = pstr;
        }
        k++;
        i++;
    }
}