// If Else If Ladder ->> 1. Find Reverse number.
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>
 void main()
 {
 int x,y,z;
 clrscr();
 printf("enter 3 numbers");
 scanf("%d%d%d",&x,&y,&z);
  if(x>y)
  {
  if(x>z)
  {
  printf("\n %d is greatest",x);
  }
  }
  else
  {
  if(z>y)
  {
  printf("\n %d is greatest",z);
  }
  else
  {
  printf("\n %d is greatest",y);
  }

  }
  getch();
  }