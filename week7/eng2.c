#include<stdio.h>
int main(void) 
{
 char cha;
 printf("알파벳을 입력하시오: ");
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
  printf("모음입니다.");
  break;
 default:
  printf("자음입니다.");
  break;
 }
 return 0;
}

