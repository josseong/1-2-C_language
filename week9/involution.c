#include <stdio.h>

int main(void){
    int a, b;
    int  sum = 0;
    printf("���� �Է��ϼ��� ");
    scanf("%d", &b);

    for(a =10 ; a <= b ; a += 2)
        {
            sum += a*a;
        }
    printf("for���� �̿��� 10~%d������ ¦�� �ŵ����� ������� %d\n", b, sum);

    sum = 0;
    a = 10;

    while(a <= b)
    {
        sum += a*a;
        a += 2;
    }
    printf("while���� �̿��� 10~%d������ ¦�� �ŵ����� ������� %d\n",b, sum);


    sum = 0;
    a = 10;

    do
    {
        sum += a*a ;
        a += 2;
    } while (a <= b);
    printf("do-while���� �̿��� 10~%d������ ¦�� �ŵ����� ������� %d\n",b, sum);

    return 0;
    }
