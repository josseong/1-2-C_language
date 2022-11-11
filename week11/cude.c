#include <stdio.h> 
int menu();
float cube_area();
float cube_vol();

int main() 
{
    int k;
    while(1)
    {
        menu();
        printf("선택하시오:");
        scanf("%d",&k);

        if(k == 1)
        {
            cube_area();
        }
        else if(k == 2)
        {
            cube_vol();
        }
        else if(k == 3)
        {
            break;
        }
        
        else
        {
            printf("보기 중에 고르세요.\n");
        }
        

        
    }
    
    
}
int menu()
{
    printf("=================\n");
    printf("=======메뉴======\n");
    printf("=================\n");
    printf("1. 정육면체의 겉넓이\n");
    printf("2.정육면체의 부피\n");
    printf("3.종료\n");
}

float cube_area()
{
    float i,j;
    printf("한 모서리의 길이를 입력하시오:");
    scanf("%f",&i);
    j = 6*i*i;
    printf("정육면체의 겉넓이는:%f\n",j);

}

float cube_vol()
{
    float i,j;
    printf("한 모서리의 길이를 입력하시오:");
    scanf("%f",&i);
    j = i*i*i;
    printf("정육면체의 부피는:%f\n",j);

}