// While loop ->> 1. Find Reverse number.
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main(){
	int num,r,temp,sum=0;
	clrscr();
	printf("Enter the number");
	scanf("%d",&num);
	while(num>0){
		r=num%10;
		sum=(sum*10)+r;
		num=num/10;
	}
	printf("%d",sum);
	getch();
}

// VK :)