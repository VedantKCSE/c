#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i=1,n;
	clrscr();
	printf("Enter the Number\n");
	scanf("%d",&num);

	do
	{
		n=num*i;
		printf("%d\n",n);
		i++;
	}
	while(i<=10);
	getch();
}