#include <stdio.h>

int main(void) 
{

	double x, y;

	printf("x��ǥ�� �Է��ϼ��� : ");

	scanf("%lf", &x);		

	printf("y��ǥ�� �Է��ϼ��� : ");
	
	scanf("%lf", &y);	

	if( x > 0 && y > 0 ) 
    {

		printf("1��и��Դϴ�.");

	}

	else if( x < 0 && y > 0 ) 
    {

		printf("2��и��Դϴ�.");

	}

	else if( x < 0 && y < 0 )
    {

		printf("3��и��Դϴ�.");

	}

	else if( x > 0 && y < 0 ) 
    {

		printf("4��и��Դϴ�.");

	}

    else
    { 
        printf("��ǥ�� ���� ��.");
    }
	return 0;

}