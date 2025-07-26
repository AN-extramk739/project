#include <stdio.h>

int main(void)
{
    int peach, basket;

    printf("복숭아의 개수 :");
    scanf_s("%d", &peach);
    basket = peach / 10;
    printf("필요한 바구니의 수 : %d", ++basket);
    
    return 0;
}