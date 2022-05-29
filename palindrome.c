#include <stdio.h>
#include <stdlib.h>

int palindrome(int a)
{
    int x, y, t = 0;
    y = a;
    while (a > 0)
    {
        x = a % 10;
        a = a / 10;
        t = t * 10 + x;
    }
    if (t == y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{   
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if (palindrome(n))
    {
        printf("It is a palindrome number");
    }
    else{
        printf("It is not a palindrome number");
    }
    
    return 0;
}