// If Else Statements ->> 1. Check enter number is Even or Odd.
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	clrscr();
	printf("Enter the number ");
	scanf("%d",&a);
	if(a % 2 == 0){
		printf("Number= %d is even ",a);
	}else{
		printf("Number= %d is odd",a);
	}

	getch();

}

// VK :)