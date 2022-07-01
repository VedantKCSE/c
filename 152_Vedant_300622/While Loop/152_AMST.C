// While Loop ->> 4. Find Armstrong number between 1 to 1000
// Vedant kahalekar (*_*)

#include<stdio.h>
#include<conio.h>

void main()
{
	int rem,num,count=1,sum;
	clrscr();
	while(count<=1000)
	{
		num=count;
		sum=0;

	while(num)
	{
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;
	}

	if(count==sum)
	{
	printf("Armstrong Number= %d\n",count);
	}
	count++;
	}
	getch();
}

// VK :)


