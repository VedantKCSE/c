/* 
    Hey, clone it in your local drive, and solve this given question.
    You can write its answer in c++ or c language, if you want to answer it in c++ just rename
    file as basicQuestion1.cpp

    1)  Write a program to print whether a number is even or odd, also take input from the user.
    
*/

/* Answer */

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}

