#include <stdio.h>
#define max 10000
int main()
{
    int n=0, sum =0;
    while(1)
    {
        n++;
        sum = sum + n;

        if(sum>=max)
            break;
    }
    sum = sum - n;
    n--;
    
    printf("%d�� �����ʴ� ���� ū ���� %d�̰�, �׶��� n���� : %d�Դϴ�.",max,sum,n);
}