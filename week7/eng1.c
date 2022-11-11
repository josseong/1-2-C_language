#include<stdio.h>
int main(void) 
{
    char cha;
    printf("알파벳을 입력하시오: ");
    scanf("%c", &cha);

    if (cha == 'a'||cha == 'e'||cha == 'i'||cha == 'o'||cha == 'u')
        printf("모음입니다.");
    
    else if (cha == 'A'||cha == 'E'||cha == 'I'||cha == 'O'||cha == 'U')
        printf("모음입니다.");
    
    else
        printf("자음입니다.");

    return 0;
 }
