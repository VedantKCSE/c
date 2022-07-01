// For Loop ->> 1. Check wheather entered number is prime number or not.
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,n,count=0;
  clrscr();
  printf("Enter the Number\n");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
	if(n%i == 0)
	{
		count=1;
		break;
	}
  }
  if(count==1)
  {
	printf("Not Prime");
  }
  else
  {
	printf("prime");
  }
  getch();
}

// VK :)