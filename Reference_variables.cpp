#include<iostream>

using namespace std;

int c=76;

int main(){
    //             BUILT IN DATA TYPES
    // int a, b , c;
    // cout<<"Please enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Please enter the value of b:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global value of c is "<<::c;
    // // The thing '::' is called scope resolution operator.

              //    Float, Double and Long double Literals
    // float d=2.5f;
    // long double e=2.5L;
    // cout<<"The size of 2.5 is "<<sizeof(2.5)<<endl;
    // cout<<"The size of 2.5F is "<<sizeof(2.5F)<<endl;
    // cout<<"The size of 2.5f is "<<sizeof(2.5f)<<endl;
    // cout<<"The size of 2.5l is "<<sizeof(2.5l)<<endl;
    // cout<<"The size of 2.5L is "<<sizeof(2.5L)<<endl;

    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
     

     //            REFERENCE VARIABLES
    //  float x=23.32;
    //  float & y=x;

    //  cout<<x<<endl;
    //  cout<<y<<endl;
                   // Type Casting

    int a=420;
    float b=420.69;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<int(b)+a<<endl;
    cout<<"The value of b is "<<(int)b+a<<endl;
    cout<<"The value of b is "<<b+a<<endl;
    int c= int(b);
    

    return 0;
}