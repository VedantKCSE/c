#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c;
  char art;
  clrscr();
  printf("Enter the value of A and B.\n");
  scanf("%d%d%c",&a,&b,&art);
  switch(art)
  {
	case '+':
	c=a+b;
	printf("\n%d is the Addition.",c);
	break;

	case '-':
	c=a-b;
	printf("\n %d is the Substraction.",c);
	break;

	case '*':
	c=a*b;
	printf("\n %d is the Multiplication.",c);
	break;

	case '/':
	printf("\n %d is the Division.",c);
	break;

	default:
	printf("Enter the correct command");
	break;

  }
  getch();
}