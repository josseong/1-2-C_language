#include <stdio.h> 

double factorial();

int main()
{
    double n;
    printf("n�� �Է��Ͻÿ�");
    scanf("%lf",&n);
    printf("���Ϸ��� ���� %lf�Դϴ�.",factorial(n));
}

double factorial(double n)
{
    double i, j, e;
    j=1.0, e = 1.0;

    for(i=1;i<=n;i++)
    {
        j=j*i;
        e=e+1.0/j;
    }
    return e;
}