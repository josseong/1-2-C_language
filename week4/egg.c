#include <stdio.h>
#define egg 30


int main(void)
{
    const int price = 150;
    int egg_carton;
    int total_egg;
    int total_price;

    printf("��� ����(��) : ");
    scanf("%d",&egg_carton);

    total_egg = egg_carton * egg;
    total_price = total_egg * price;

    printf("����� �� %d �� �Դϴ�\n", total_egg);
    printf("������ %d �� �Դϴ�.", total_price);
    return 0;
}