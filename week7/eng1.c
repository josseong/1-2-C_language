#include<stdio.h>
int main(void) 
{
    char cha;
    printf("���ĺ��� �Է��Ͻÿ�: ");
    scanf("%c", &cha);

    if (cha == 'a'||cha == 'e'||cha == 'i'||cha == 'o'||cha == 'u')
        printf("�����Դϴ�.");
    
    else if (cha == 'A'||cha == 'E'||cha == 'I'||cha == 'O'||cha == 'U')
        printf("�����Դϴ�.");
    
    else
        printf("�����Դϴ�.");

    return 0;
 }
