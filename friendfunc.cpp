#include <iostream>
using namespace std;

/*

Properties of friend function-

1.Not in the scope of class.
2.Since it is not in the scope of the class, it cannot be called
  from the object of the class. eg--> a1.sum() is invalid.
3.Can be called without the help of object.
4.Usually it take objects as arguments.
5.Can be declared inside the public and private section of the class.
6.It cannot access the members directly by their names and need object.member to access the member.

*/

// Forward declaration
class complex;

class calculator
{
    
    public :
    int realsum(complex ,complex);
    int complexsum(complex ,complex);
};


class complex
{
    int x, y;
    //Individually declaring as a freind 

     /*
     friend int calculator :: realsum(complex c1,complex c2);
     friend int calculator :: complexsum(complex c1,complex c2);
     */

    //Declaring the whole class as a friend 
    friend class calculator;

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }

    friend complex sum(complex c1, complex c2);

    void print()
    {
        cout << "Your complex number is " << x << " + " << y << "i" << endl;
    }
    void sum_print()
    {
        cout<<"The sum of the two complexes is : "<<x<<" + "<<y<<"i"<<endl;
    }
};

complex sum(complex c1 , complex c2){
    complex o;
    o.x=c1.x+c2.x;
    o.y=c1.y+c2.y;
    o.sum_print();
}


int calculator ::realsum(complex c1,complex c2){
    
    cout<<"Real sum is : "<<c1.x+c2.x<<endl;
}
int calculator ::complexsum(complex c1,complex c2){
    
    cout<<"Complex sum is : "<<c1.y+c2.y;
}

int main()
{

    complex a1, a2,a3;

    a1.setdata(2, 5);
    a1.print();

    a2.setdata(10, 7);
    a2.print();

    sum(a1, a2);

    calculator a;
    a.realsum(a1,a2);
    a.complexsum(a1,a2);


    return 0;
}
