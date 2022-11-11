#include <stdio.h>

double get_mul(double a,double b );
double get_div(double a,double b );

int main()
{
    double i, j;
    printf("두개의 실수를 입력하세요.");
    scanf("%lf %lf",&i,&j);

    get_mul(i,j);
    get_div(i,j);
}

double get_mul(double a,double b )
{
    double k;
    printf("두 수의 곱");
    k = a*b;
    printf("%lf",k);
    
}

double get_div(double a,double b )
{
    double t;
    printf("두 수의 나눗셈");
    t = a/b;
    printf("%lf",t);
    
}