#include <stdio.h>

int main(void)
{
    int num;
    printf("4�ڸ� ������ �Է��ϼ��� : ");
    scanf("%d",&num);
    printf(" õ�� �ڸ� : %d \n" , num / 1000);
    num = num % 1000;
    printf(" ���� �ڸ� : %d \n" , num / 100);
    num = num % 100;
    printf(" ���� �ڸ� : %d \n" , num / 10);
    num = num % 10;
    printf(" ���� �ڸ� : %d \n" , num );
    return 0;
}
