#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,a,p;
    printf("Enter the Length and Breadth >\n");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("Area of Rectangle = %d \nPerimeter = %d",a,p);
    getch();
}