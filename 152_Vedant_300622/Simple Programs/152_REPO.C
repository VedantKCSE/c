#include<stdio.h>
#include<conio.h>

void main()
{
  float m,b,e,p,c,t,a;
  char name[10];
  clrscr();
  printf("Enter your Name - \n");
  scanf("%s",&name);
  printf("Enter the marks of Maths, Physics, Biology, Chemistry, English\n");
  scanf("%f%f%f%f%f",&m,&p,&b,&c,&e);
  t=m+p+b+c+e;
  a=t/5;
  printf("\nName = %s \n\nTotal = %f \nAverage = %f",name,t,a);
  getch();
}
