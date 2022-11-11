#include <stdio.h>

int main(void){
    int n;
    int i = 1;
    int result = 1;

    printf("n을 입력하세요: ");
    scanf("%d",&n);
    
    while(i)
    {

        printf("%d ",i);
        
        if(i >= n || n < 0)
            break;


        result *= i;
        i += 1;
    }

    printf("\n1부터 n까지의 곱%d",result * n);
}

