#include <stdio.h>

int main(void)
{
    float x;
    printf("실수를 입력하세요");
    scanf("%f", &x);

    printf("실수 형식으로: %.6f\n", x);
    printf("지수 형식으로: %e", x);


    int y;
    printf("\n10진수 정수를 입력하세요");
    scanf("%d", &y);

    printf("8진수로는%#o입니다.\n10진수로는%d입니다. \n16진수로는%#x입니다.", y,y,y);


    double a;
    double b;
    double h;
    float total;

    printf("\n가로,세로,높이를 순서대로 입력하세요");
    scanf("%lf %lf %lf",&a,&b,&h);
    total = a*b*h;
    printf("\n상자의 부피는 %f 입니다.",total);


}