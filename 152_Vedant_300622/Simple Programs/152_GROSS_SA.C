// Simple Programs ->> 6. Find gross salary with TA, DA and HRA.
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main()
{
  float ts,hra,da,gs;
  clrscr();
  printf("Enter the total salary\n");
  scanf("%f",&ts);
  hra=ts*(0.2);
  da=ts*(0.4);
  gs=ts+da+hra;
  printf("Gross Salary = %f",gs);
  getch();
}

// VK :)