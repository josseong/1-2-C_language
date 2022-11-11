#include <stdio.h>
#define egg 30


int main(void)
{
    const int price = 150;
    int egg_carton;
    int total_egg;
    int total_price;

    printf("계란 수량(판) : ");
    scanf("%d",&egg_carton);

    total_egg = egg_carton * egg;
    total_price = total_egg * price;

    printf("계란은 총 %d 알 입니다\n", total_egg);
    printf("가격은 %d 원 입니다.", total_price);
    return 0;
}