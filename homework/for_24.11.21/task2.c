#include <stdio.h>
#include <string.h>

unsigned strlen_custom(char *);

void main() {
    char str[128] = {" "};
    printf("Input string (not more than 127 symbols)\n>> ");
    scanf("%127s", str);

    unsigned custom_len = strlen_custom(str);
    unsigned module_len = strlen(str);

    printf("\nModule function: %u\n", module_len);
    printf("Custom function: %u\n", custom_len);
}

unsigned strlen_custom(char *str) {
    int i;
    for (i = 0; i < 127; i++) {
        if (str[i] == 0) break;
    }
    return (unsigned) i;
}