#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;
    int max_num; 

    printf("�� ���� ������ �Է��ϼ���:");
    scanf("%d %d %d", &a, &b, &c);
    
    max_num = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

    printf("%d��(��) ���� ū �����Դϴ�.",max_num);
    
    return 0;

}    