#include <stdio.h>

int main(void)
{
    float NUM;
    int result;

    printf("NUM :");
    scanf_s("%f", &NUM);
    printf("%d",(int)NUM % 10);

    return 0;
}