#include <stdio.h> 

int main(void)
{
    int sum = 0;
    int i = 1;

    for(i=1;i<100;i++)
    {
        if(i%7==0)
            sum += i;
    }

    printf("1부터 100사이의 모든 7의 배수의 합은 %d입니다.",sum);
}