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
        printf("�����Ͻÿ�:");
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
            printf("���� �߿� ������.\n");
        }
        

        
    }
    
    
}
int menu()
{
    printf("=================\n");
    printf("=======�޴�======\n");
    printf("=================\n");
    printf("1. ������ü�� �ѳ���\n");
    printf("2.������ü�� ����\n");
    printf("3.����\n");
}

float cube_area()
{
    float i,j;
    printf("�� �𼭸��� ���̸� �Է��Ͻÿ�:");
    scanf("%f",&i);
    j = 6*i*i;
    printf("������ü�� �ѳ��̴�:%f\n",j);

}

float cube_vol()
{
    float i,j;
    printf("�� �𼭸��� ���̸� �Է��Ͻÿ�:");
    scanf("%f",&i);
    j = i*i*i;
    printf("������ü�� ���Ǵ�:%f\n",j);

}