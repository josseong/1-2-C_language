#include<stdio.h>
int main(void) 
{
 int month;

 printf("월(1~12)을 입력하세오: ");
 scanf("%d", &month);

if (month >= 13 || month <= 0)
{
    printf("1~12중에 다시 입력바랍니다.");
}

switch (month) 
 {
 case 1:
  printf("Jan\n");
  break;
 case 2:
  printf("Feb\n");
  break;
 case 3:
  printf("Mar\n");
  break;
 case 4:
  printf("Apr\n");
  break;
 case 5:
  printf("May\n");
  break;
 case 6:
  printf("Jun\n");
  break;
 case 7:
  printf("Jul\n");
  break;
 case 8:
  printf("Aug\n");
  break;
 case 9:
  printf("Sep\n");
  break;
 case 10:
  printf("Oct\n");
  break;
 case 11:
  printf("Nov\n");
  break;
 case 12:
  printf("Dec\n");
  break;
 }
 return 0;
}