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