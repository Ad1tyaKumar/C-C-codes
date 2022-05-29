#include<stdio.h>

int main(){
    int num1;

    scanf("%d", &num1);  //It will scan the input

    int a = num1 % 10;   //It will calculate the last digit

    printf("%d   ", a); //It will print the last digit

    num1 = num1 / 10;   /*We divide it by 10 to eliminate the last digit*/

    int b = num1 % 10;  /*We will do the same thing 10 times with different variables and it will separate all the digits.*/

    printf("%d   ", b);

    num1 = num1 / 10;

    int c = num1 % 10;

    printf("%d   ", c);

    num1 = num1 / 10;

    int d = num1 % 10;

    printf("%d   ", d);

    num1 = num1 / 10;

    int e = num1 % 10;

    printf("%d   ", e);

    num1 = num1 / 10;

    int f = num1 % 10;

    printf("%d   ", f);

    num1 = num1 / 10;

    int g = num1 % 10;

    printf("%d   ", g);

    num1 = num1 / 10;

    return 0;
}