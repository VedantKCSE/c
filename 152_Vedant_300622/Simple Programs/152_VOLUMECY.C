
#include<stdio.h>
#include<conio.h>

void main()
{
 int v,pi=3.14,r,h;
 clrscr();
 printf("Enter the value of R and h\n");
 scanf("%d%d",&r,&h);
 v=pi*r*r*h;
 printf("Volume = %d",v);
 getch();
}