#include <stdio.h>

int main(void)
{
    int NUM1, NUM2, result1,result2,result3,result4;

    printf("NUM1 :");
    scanf_s("%d", &NUM1);
    printf("NUM2 :");
    scanf_s("%d", &NUM2);

    result1 = NUM1 && NUM2;
    result2 = NUM1 || NUM2;
    result3 = NUM1 & NUM2;
    result4 = NUM1 | NUM2;

    printf("%d && %d = %d\n", NUM1, NUM2 ,result1);
    printf("%d || %d = %d\n", NUM1, NUM2 ,result2);
    printf("%d & %d = %d\n", NUM1, NUM2 ,result3);
    printf("%d | %d = %d\n", NUM1, NUM2 ,result4);

    return 0;
}