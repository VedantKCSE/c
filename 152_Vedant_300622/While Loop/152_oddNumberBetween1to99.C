#include<stdio.h>
#include<conio.h>

void main(){
	int i;
	clrscr();
	i=1;
	while(i<=99){
		if(i%2 !=0){
			printf("%d \n",i);
		}
		i++;
	}
	getch();

}