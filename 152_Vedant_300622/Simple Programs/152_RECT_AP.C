#include<conio.h>

void main()
{
  int l,b,a,p;
  clrscr();
  printf("Enter the L and B\n");
  scanf("%d%d",&l,&b);
  a=l*b;
  p=2*(l+b);
  printf("Area = %d \nPerimeter = %d",a,p);
  getch();
}