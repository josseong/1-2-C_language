#include <stdio.h>

int main(void){
    int n;
    int i = 1;
    int result = 1;

    printf("n�� �Է��ϼ���: ");
    scanf("%d",&n);
    
    while(i)
    {

        printf("%d ",i);
        
        if(i >= n || n < 0)
            break;


        result *= i;
        i += 1;
    }

    printf("\n1���� n������ ��%d",result * n);
}

