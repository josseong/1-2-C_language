#include <stdio.h>

int main(void)
{
    float x;
    printf("�Ǽ��� �Է��ϼ���");
    scanf("%f", &x);

    printf("�Ǽ� ��������: %.6f\n", x);
    printf("���� ��������: %e", x);


    int y;
    printf("\n10���� ������ �Է��ϼ���");
    scanf("%d", &y);

    printf("8�����δ�%#o�Դϴ�.\n10�����δ�%d�Դϴ�. \n16�����δ�%#x�Դϴ�.", y,y,y);


    double a;
    double b;
    double h;
    float total;

    printf("\n����,����,���̸� ������� �Է��ϼ���");
    scanf("%lf %lf %lf",&a,&b,&h);
    total = a*b*h;
    printf("\n������ ���Ǵ� %f �Դϴ�.",total);


}