// Do While ->> 3. Display 2, 4, 6, 8,...., 100
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=2;
	clrscr();
	do
	{
		printf("%d, ",i);
		i=i+2;
	}while(i<=100);
	getch();
}

// VK :)