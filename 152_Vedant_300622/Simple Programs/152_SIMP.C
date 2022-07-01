#include<stdio.h>
#include<conio.h>

void main()
{
  float s,p,n,r;
  clrscr();
  printf("Enter the values of P, N, R\n");
  scanf("%f%f%f",&p,&n,&r);
  s=(p*n*r)/100;
  printf("Simple Interest = %f",s);
  getch();
}