#include <stdio.h> 

int main(void)
{
    int sum = 0;
    int i = 1;

    for(i=1;i<100;i++)
    {
        if(i%7==0)
            sum += i;
    }

    printf("1���� 100������ ��� 7�� ����� ���� %d�Դϴ�.",sum);
}