#include<iostream>

using namespace std;

int main(){
    
   int a=3;
   int* b;
   b=&a;

   //'&' Represents the (address of) operator '&' is called Ampersand

   cout<<"The address of a is "<<b<<endl;
   cout<<"The address of a is "<<&a<<endl;

   //'*' Represents the (value at) operator 

   cout<<"The value at address of b is "<<*b<<endl;

   //Pointer to pointer

   int** c;
   c=&b;

   cout<<"The address of b is "<<c<<endl;
   cout<<"The address of b is "<<&b<<endl;
   cout<<"The value at address value at ( value at(c)) is "<<**c;
   


    return 0;
}