#include <stdio.h>

double get_mul(double a,double b );
double get_div(double a,double b );

int main()
{
    double i, j;
    printf("�ΰ��� �Ǽ��� �Է��ϼ���.");
    scanf("%lf %lf",&i,&j);

    get_mul(i,j);
    get_div(i,j);
}

double get_mul(double a,double b )
{
    double k;
    printf("�� ���� ��");
    k = a*b;
    printf("%lf",k);
    
}

double get_div(double a,double b )
{
    double t;
    printf("�� ���� ������");
    t = a/b;
    printf("%lf",t);
    
}