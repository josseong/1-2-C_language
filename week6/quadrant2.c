#include<stdio.h>

int main(void) 
{

	double x, y;

	printf("x좌표를 입력하세요 : ");

	scanf("%lf", &x);		

	printf("y좌표를 입력하세요 : ");
	
	scanf("%lf", &y);		

    (x == 0 || y == 0) ?  printf("좌표선 위의 점") : ((x>0) ? ((y>0) ? printf("1사분면"):printf("4사분면")) : ((y>0) ? printf("2사분면"):printf("3사분면")));

	return 0;

}