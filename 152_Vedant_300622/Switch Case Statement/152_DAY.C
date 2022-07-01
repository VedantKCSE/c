// Switch Case Statements ->> 2. Display Day of Week
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	printf("Enter the day number");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("\nMonday");
		break;

		case 2:
		printf("\nTuesday");
		break;

		case 3:
		printf("\nWednesday");
		break;

		case 4:
		printf("\nThrusday");
		break;

		case 5:
		printf("\nFriday");
		break;

		case 6:
		printf("\nSaturday");
		break;

		case 7:
		printf("\nSunday");
		break;

		default:
		printf("\nInvalid Number");
		break;
	}

	getch();
}

// VK :)