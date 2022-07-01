// If Else Statement ->> 2. Check entered number is +ve or -ve.
// Vedant kahalekar (*_*)

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    clrscr();
    printf("Enter the Number\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is Positive", n);
    }
    else
    {
        printf("%d is Negetive", n);
    }
    getch();
}

// VK :)