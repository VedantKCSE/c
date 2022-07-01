// If Else Statement ->> 4. Enter the year and check year is leap Year or not
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>
void main(){
	int year;
	clrscr();
	printf("Enter the year");
	scanf("%d",&year);
	if(year%4==0){
		printf("%d is leap year",year);
	}else{
		printf("%d is not leap year",year);
	}
	getch();
}

// VK :)