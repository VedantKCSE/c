#include<stdio.h>
#include<conio.h>
void main()
{
    float c,r,h,p=3.14;
    printf("Enter the Radius and Height > \n");
    scanf("%f%f",&r,&h);
    printf("Radius = %f Height = %f \n",r,h);
    c=p*r*r*h;
    printf("Volume of Cylinder = %f ",c);
    getch();
}