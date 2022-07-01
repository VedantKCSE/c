#include<stdio.h>
#include<conio.h>

void main()
{
  int num;
  clrscr();
  printf("Enter the Number\n");
  scanf("%d",&num);
  if(num>0)
  {
   printf("Number is Positive");
  }
  else if (num==0)
  {
   printf("Number is O");
  }
  else
  {
   printf("Number is Negetive");
  }
  getch();
}