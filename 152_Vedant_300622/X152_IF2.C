// If Statement ->> 1. Find Greatest Number between two variables.
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main()
{
  int x,y;
  clrscr();
  printf("Enter the value of X and Y\n");
  scanf("%d%d",&x,&y);
  if(x>y)
  {
    printf("X is Greatest");
  }
  if(y>x)
  {
    printf("Y is Greatest");
  }
  getch();
}

// VK :)