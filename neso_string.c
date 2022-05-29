#include<stdio.h>
#include<string.h>

int innput(char str[], int n)
{
    int ch, i=0;
    while ((ch=getchar())!='\n')
    {
        if(i<n)
        {
            str[i++] = ch;
        }
    }
    str[i]='\0';
    return i;
}



int main()
{
    char str[100];
    int n=innput(str,6);
    printf("%d %s",n,str);

    return 0;
}