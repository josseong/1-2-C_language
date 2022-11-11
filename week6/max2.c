#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;
    int max_num; 

    printf("세 개의 정수를 입력하세요:");
    scanf("%d %d %d", &a, &b, &c);
    
    max_num = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

    printf("%d이(가) 가장 큰 정수입니다.",max_num);
    
    return 0;

}    