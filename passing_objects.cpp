#include <iostream>

using namespace std;

class complex
{
    int x, y;

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void sum(complex c1, complex c2)
    {
        x=c1.x+ c2.x;
        y=c1.y+c2.y;
    }
    void print()
    {
        cout<<"Your complex number is "<<x<<" + "<<y<<"i"<<endl;
    }
};

int main()
{

complex a1,a2,a3;

a1.setdata(2,5);
a1.print();

a2.setdata(10,7);
a2.print();

a3.sum(a1,a2);
a3.print();





    return 0;
}