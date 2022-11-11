#include <stdio.h>

int main(void)
{
    char code1;

    printf("문자열 A를 입력하세요 :");
    scanf("%c",&code1);

    printf("%c %c %c",code1 + 9, code1 + 50, code1 + 39);
    return 0;
}