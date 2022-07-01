// Simple Statements ->> 1. Calculate Distance between two Cities in KM, Feet, Inch, CM, etc
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main()
{
  float d,m,c,i,f;
  clrscr();
  printf("Enter the distance\n");
  scanf("%f",d);
  m=d*1000;
  c=m*100;
  i=c/2.54;
  f=i/12;
  printf("Distance = %f \n\nIn \nMeter = %f \nCentimeter = %f \nInch = %f \nFoot = %f",d,m,c,i,f);
  getch();
}

// VK :)