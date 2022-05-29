#include <stdio.h>


int main()
{
    int p;       
    scanf("%d", &p);  //it will scan the value of first number
    int large = p;
    int small=p;
    int q;              
    scanf("%d", &q);    
    if (q > large)  //it will see if 
    {
        large = q;
    }
    if(q<small)
    {
        small=q;
    }
    int r;
    scanf("%d", &r);
    if (r > large)
    {
        large = r;
    }
     if(r<small)
    {
        small=r;
    }
    int s;
    scanf("%d", &s);
    if (s > large)
    {
        large = s;
    }
     if(s<small)
    {
        small=s;
    }
    int t;
    scanf("%d", &t);
    if (t > large)
    {
        large = t;
    }
     if(t<small)
    {
        small=t;
    }
    int u;
    scanf("%d", &u);
    if (u > large)
    {
        large = u;
    }
     if(u<small)
    {
        small=u;
    }
    int v;
    scanf("%d", &v); 
    if (v > large)
    {
        large = v;
    }
     if(v<small)
    {
        small=v;
    }
    printf("The max of the number is : %d\n",large);
    printf("The min of the number is : %d\n",small);

    return 0;}