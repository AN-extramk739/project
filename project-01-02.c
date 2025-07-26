#include <stdio.h>

int main(void)
{
    int num1, num2, absolute;

    printf("10진수 정수 입력 :");
    scanf_s("%d", &num1);
    printf("몇 진수로 출력할까요? 8진수는 1 입력, 16진수는 2 입력 :");
    scanf_s("%d", &num2);

    absolute = num2 == 1 ? printf("결과 : %o", num1) : printf("결과 : %x", num1);

    return 0;
}