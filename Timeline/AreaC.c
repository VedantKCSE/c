#include<stdio.h>
#include<conio.h>
int main()
{
    float r,a,c,p=3.14;
    printf("Enter the Radius >\n");
    scanf("%f",&r);
    a=p*r*r;
    c=2*p*r;
    printf("Area of Circle = %f \nCircumference = %f",a,c);
    getch();
}