#include <stdio.h>

void main() {
    int pass, pass_repeat;
    printf("Enter password:\n");
    scanf("%d", &pass);
    printf("\nRepeat password:\n");
    scanf("%d", &pass_repeat);

    // printf("\n%d", pass == pass_repeat);
    // Хотел так, но подумал, что это кривовато и сделал **без использования if(){}else{}**

    switch (pass == pass_repeat) {
    case 0:
        printf("\nPasswords do not match\n");
        break;
    case 1:
        printf("\nPasswords match\n");
        break;
    default:
        break;
    }
}