#include <stdio.h>

int main(void){
    int a, b;
    int  sum = 0;
    printf("값을 입력하세요 ");
    scanf("%d", &b);

    for(a =10 ; a <= b ; a += 2)
        {
            sum += a*a;
        }
    printf("for문을 이용한 10~%d까지의 짝수 거듭제곱 결과값은 %d\n", b, sum);

    sum = 0;
    a = 10;

    while(a <= b)
    {
        sum += a*a;
        a += 2;
    }
    printf("while문을 이용한 10~%d까지의 짝수 거듭제곱 결과값은 %d\n",b, sum);


    sum = 0;
    a = 10;

    do
    {
        sum += a*a ;
        a += 2;
    } while (a <= b);
    printf("do-while문을 이용한 10~%d까지의 짝수 거듭제곱 결과값은 %d\n",b, sum);

    return 0;
    }
