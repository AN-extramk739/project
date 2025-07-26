#include <stdio.h>

int main(void)
{
    int second, hour, minute, sec;

    printf("초를 입력하세요 :");
    scanf_s("%d", &second);
    hour = second / 3600;
    minute = (second - hour * 3600)/60;
    sec = second % 10;
    printf("%d시간 %d분 %d초",hour, minute, sec);
}