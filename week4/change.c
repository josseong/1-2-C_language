#include <stdio.h>

int main(void)
{
    double value1;
    double value2;
    double tmp = 0;

    printf("value1의 값을 입력하세요.");
    scanf("%lf",&value1);
    printf("value2의 값을 입력하세요.");
    scanf("%lf",&value2);

    tmp = value1;
    value1 = value2;
    value2 = tmp;

    printf("바뀐 value1은%lf이며 바뀐 value2는%lf이다.",value1,value2);
}