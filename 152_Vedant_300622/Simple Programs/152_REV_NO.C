#include<stdio.h>
#include<conio.h>

void main()
{
   int num,a1,a2,a3,a4,rev;
   clrscr();
   printf("Enter the number:\n");
   scanf("%d",&num);
   a1=num%10;
   num=num/10;
   a2=num%10;
   num=num/10;
   a3=num%10;
   num=num/10;
   a4=num%10;
   rev=a1*1000+a2*100+a3*10+a4;
   printf("%d",rev);
   getch();
}