#include <stdio.h>

int main(void) 
{

	double x, y;

	printf("x좌표를 입력하세요 : ");

	scanf("%lf", &x);		

	printf("y좌표를 입력하세요 : ");
	
	scanf("%lf", &y);	

	if( x > 0 && y > 0 ) 
    {

		printf("1사분면입니다.");

	}

	else if( x < 0 && y > 0 ) 
    {

		printf("2사분면입니다.");

	}

	else if( x < 0 && y < 0 )
    {

		printf("3사분면입니다.");

	}

	else if( x > 0 && y < 0 ) 
    {

		printf("4사분면입니다.");

	}

    else
    { 
        printf("좌표선 위의 점.");
    }
	return 0;

}