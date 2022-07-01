// If Statement ->> 2. Find Largest Number amongs three variables.
// Vedant kahalekar (*_*)

#include <stdio.h>
#include <conio.h>

void main()
{
  int x, y, z;
  printf("Enter Value of A, B and C\n");
  scanf("%d%d%d", &x, &y, &z);
  if (x > y && x > z)
  {
    printf("X is Greatest.");
  }
  if (y > x && y > z)
  {
    printf("Y is Greatest.");
  }
  if (z > x && z > y)
  {
    printf("Z is Greatest.");
  }
  getch();
}

// VK :)