#include <stdio.h> 

double factorial();

int main()
{
    double n;
    printf("n을 입력하시오");
    scanf("%lf",&n);
    printf("오일러의 수는 %lf입니다.",factorial(n));
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