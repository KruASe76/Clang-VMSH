#include <stdio.h>

void main() {
    char str1[1000], str2[1000];
    printf("Input first string:\n");
    scanf("%1000s", str1);
    printf("\nInput second string:\n");
    scanf("%1000s", str2);

    for (int i = 0; i < 1000; i++) {
        if (str1[i] != str2[i]) {
            printf("\nStrings are not similar\nCharacters matched: %d\n", i);
            break;
        } else {
            if ((int) str1[i] == 0) {
                printf("\nStrings are similar\nAll characters (%d) mathced\n", i);
                break;
            }
        }
    }
}