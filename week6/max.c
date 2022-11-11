#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("세 개의 정수를 입력하세요:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d이(가) 가장 큰 정수",a);
        }
        else
        {
            printf("%d이(가) 가장 큰 정수", c);
        }
    }
    else//(a<=b) 
    {
        if (b > c)
        {
            {
                printf("%d이(가) 가장 큰 정수 ", b);
            }
        }
        else
        {
            printf("%d이(가) 가장 큰 정수 ", c);
        }
    }
    return 0;
}
