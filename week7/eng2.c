#include<stdio.h>
int main(void) 
{
 char cha;
 printf("���ĺ��� �Է��Ͻÿ�: ");
 scanf("%c", &cha);
 switch(cha)
 {
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
  printf("�����Դϴ�.");
  break;
 default:
  printf("�����Դϴ�.");
  break;
 }
 return 0;
}

