#include <stdio.h>
int main() {
    char str[10] = "Helloa";
    char str2[10] = "Hellas";
    char str3[10] = "jhfjdsll";

    int match_count = 0;
    int match_count2 = 0;
    char *read1 = &str[0];
    char *read2 = &str2[0];
    char *read3 = &str3[0];
    while (*read1 != '\0') {
        if (*read1 == *read2) {
            match_count += 1;
        } else if (*read1 == *read3) {
            match_count2 += 1;
        }
        read1++;
        read2++;
        read3++;

    }
    printf("%d", match_count);
    printf("%d", match_count2);

    if (match_count > match_count2) {
        for (int i = 0; i < 10;i ++) {
            printf("%c", str2[i]);
        }
    } else if (match_count < match_count2) {
        for (int i = 0; i < 10;i ++) {
            printf("%c", str3[i]);
        }
    }
}

