#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float x,sum=0,row;
	int i,n;
	//clrscr();
	printf("Enter the value of X\n");
	scanf("%f",&x);
	printf("Enter the No. of terms:\n");
	scanf("%d",&n);
	row=0;
	for(i=1;i<=n;i++)
	{
		row=row+pow(x,i);
		//sum=sum+row;
	}
	printf("\nThe Sum is %f\n",row);
	getch();
}