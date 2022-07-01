#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b;
  clrscr();
  printf("Enter the value of A and B\n");
  scanf("%d%d",&a,&b);
  a=a-b;
  b=a+b;
  a=b-a;
  printf("A = %d \nB = %d",a,b);
  getch();
}