#include<stdio.h>

int main(void) 
{

	double x, y;

	printf("x��ǥ�� �Է��ϼ��� : ");

	scanf("%lf", &x);		

	printf("y��ǥ�� �Է��ϼ��� : ");
	
	scanf("%lf", &y);		

    (x == 0 || y == 0) ?  printf("��ǥ�� ���� ��") : ((x>0) ? ((y>0) ? printf("1��и�"):printf("4��и�")) : ((y>0) ? printf("2��и�"):printf("3��и�")));

	return 0;

}