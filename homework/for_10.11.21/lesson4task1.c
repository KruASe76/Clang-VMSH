#include <stdio.h>

void main() {
    char str[1000];
    // Да, костыль. А как еще?.. (Для задач из этого урока решил, что будет некорректно использовать динамическое выделение)
    printf("Input string:\n");
    scanf("%1000s", str);
    
    int count = 0;
    for (count; (int) str[count] != 0; count++) {}
    printf("\nString length: %d\n", count);
}