#include<iostream>
using namespace std;

int main(){
    int a=12, b=10;
    
    cout<<"Following are the types of operators"<<endl;
    // 1.Arithmetic Operators
    cout<<"The value of a+b= "<<a+b<<endl;
    cout<<"The value of a-b= "<<a-b<<endl;
    cout<<"The value of a*b= "<<a*b<<endl;
    cout<<"The value of a/b= "<<a/b<<endl;
    cout<<"The value of a%b= "<<a%b<<endl;
    cout<<"The value of a++= "<<a++<<endl;
    cout<<"The value of a--= "<<a--<<endl;
    cout<<"The value of ++a= "<<++a<<endl; 
    cout<<"The value of --a= "<<--a<<endl;
    cout<<endl;

    //2.Assignment Operators
    //int a=12,b=10 or char 'c'=d 
    
    //3.Comparison Operators
    cout<<"The value of a==b is"<<(a==b)<<endl;
    cout<<"The value of a!=b is"<<(a!=b)<<endl;
    cout<<"The value of a<=b is"<<(a<=b)<<endl;
    cout<<"The value of a>=b is"<<(a>=b)<<endl;
    cout<<"The value of a<b is"<<(a<b)<<endl;
    cout<<"The value of a>b is"<<(a>b)<<endl;
    cout<<endl;

    //4.Logical Operators
    cout<<"Following are the Logical operators"<<endl;
    cout<<"The value of logical operator ((a==b) && (a>b)) is "<<((a==b) && (a>b))<<endl;
    cout<<"The value of logical operator ((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of logical operator (!(a==b)) is "<<(!(a==b))<<endl;
    
    



    return 0;
}