#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Rus");

    int num;

    printf("������� ���������� ����������:\n");
    scanf("%d", &num);
    unsigned uns_num = abs(num); // � ����� �� ������� ������������� �����?

    int sw;
    if (uns_num%10 == 1 && uns_num%100/10 != 1) {
        sw = 1;
    } else if ((uns_num%10 == 2 || uns_num%10 == 3 || uns_num%10 == 4) && uns_num%100/10 != 1) {
        sw = 2;
    } else {
        sw = 0;
    }

    switch (sw) {
    case 0:
        printf("\n%d ����������\n", num);
        break;
    case 1:
        printf("\n%d ��������\n", num);
        break;
    case 2:
        printf("\n%d ���������\n", num);
        break;
    
    default:
        printf("\n�����\n");
        break;
    }
}