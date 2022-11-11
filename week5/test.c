#include <stdio.h>
#define peong 3.3058


int main(void)
{

    float x;
    float y;
    printf("평을 입력하세요: ");
    scanf("%f",&x);
    y = x * peong;
    printf("%f 평방미터 입니다.", y);

}