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
    
    printf("%d를 넘지않는 가장 큰 합은 %d이고, 그때의 n값은 : %d입니다.",max,sum,n);
}