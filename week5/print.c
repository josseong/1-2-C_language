#include <stdio.h>

int main(void)
{
    int num;
    printf("4자리 정수를 입력하세요 : ");
    scanf("%d",&num);
    printf(" 천의 자리 : %d \n" , num / 1000);
    num = num % 1000;
    printf(" 백의 자리 : %d \n" , num / 100);
    num = num % 100;
    printf(" 십의 자리 : %d \n" , num / 10);
    num = num % 10;
    printf(" 일의 자리 : %d \n" , num );
    return 0;
}
