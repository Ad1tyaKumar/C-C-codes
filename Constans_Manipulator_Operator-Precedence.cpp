#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // int a=7;
    // cout<<"The value of a was "<<a<<endl;

    // a=10;
    // cout<<"The value of a is "<<a;
    
    //When we applied constant int it does not allow to change the value of a futher
    // const int a=20;
    // cout<<"value of a is "<<a;
    // a=29; /*It is not allowing it change as it is marked by red underline, it gives an error*/
    
    //Introducing manipulators

    // int a=2,b=79,c=9000;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b wihtout setw is "<<b<<endl;
    // cout<<"The value of c wihtout setw is "<<c<<endl;
    // cout<<endl;

    // cout<<"The value of a is "<<setw(5)<<a<<endl;
    // cout<<"The value of b is "<<setw(5)<<b<<endl;
    // cout<<"The value of c is "<<setw(5)<<c<<endl;
   
   //OPERATOR PRECEDENCE
    int a=8, b=6;
    // int c= a*8+b; 
    int c=((((a*8)+b)-20)+50); /*Refer this link for list of operator precedence https://en.cppreference.com/w/cpp/language/operator_precedence*/
    cout<<c;

    return 0;
}