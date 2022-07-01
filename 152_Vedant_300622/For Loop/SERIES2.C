#include<stdio.h>
#include<conio.h>

int main()
{
	float x,sum=0,row;
	int i,n;
	//clrscr();
	printf("Enter the value of X\n");
	scanf("%f",&x);
	printf("Enter the No. of terms:\n");
	scanf("%d",&n);
	row=1;
	for(i=1;i<=n;i++)
	{
		row=row*x/(float)i;
		sum=sum+row;
	}
	printf("\nThe Sum is %f\n",sum);
	getch();
}