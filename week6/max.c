#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("�� ���� ������ �Է��ϼ���:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d��(��) ���� ū ����",a);
        }
        else
        {
            printf("%d��(��) ���� ū ����", c);
        }
    }
    else//(a<=b) 
    {
        if (b > c)
        {
            {
                printf("%d��(��) ���� ū ���� ", b);
            }
        }
        else
        {
            printf("%d��(��) ���� ū ���� ", c);
        }
    }
    return 0;
}
