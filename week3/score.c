#include <stdio.h>

int main(void)

{
    int a;
    int b;
    int c;
    float total;
    float average;

    printf("�߰���� ����");
    scanf("%d",&a);

    printf("���� ����");
    scanf("%d",&b);

    printf("�⸻��� ����");
    scanf("%d",&c);

    total = a+b+c;
    average = total/3.0;

    printf("���� ���:%f", average);

    return 0;
}