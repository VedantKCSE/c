#include<stdio.h>
#include<conio.h>

void main()
{
 int x;
 clrscr();
 printf("Enter the number from 1 to 5");
 scanf("%d",&x);
 switch(x)
 {
    case 1:
    printf("\nOne");
    break;

    case 2:
    printf("\nTwo");
    break;

    case 3:
    printf("\nThree");
    break;

    case 4:
    printf("\nFour");
    break;

    case 5:
    printf("\nFive");
    break;

    default:
    printf("\nInvalid Number");
    break;
 }
 getch();
}