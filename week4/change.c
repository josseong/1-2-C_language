#include <stdio.h>

int main(void)
{
    double value1;
    double value2;
    double tmp = 0;

    printf("value1�� ���� �Է��ϼ���.");
    scanf("%lf",&value1);
    printf("value2�� ���� �Է��ϼ���.");
    scanf("%lf",&value2);

    tmp = value1;
    value1 = value2;
    value2 = tmp;

    printf("�ٲ� value1��%lf�̸� �ٲ� value2��%lf�̴�.",value1,value2);
}