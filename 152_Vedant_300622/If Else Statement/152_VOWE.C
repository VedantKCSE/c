

#include<stdio.h>
#include<conio.h>
void main(){
	char c;
	clrscr();
	printf("Enter the char ");
	scanf("%c",&c);
	if(( c == 'a'||c=='e'||c=='i'||c=='o'||c=='u') ||( c=='A' ||c=='E'||c=='I'||c=='O'||c=='U')){
		printf("Charecter is vowel");
	}else{
		printf("Charecter is consonant");
	}
	getch();
}


