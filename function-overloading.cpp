#include<iostream>
using namespace std;

//Function overloading means creating same functions with different no of arguments.

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
} 

int volume(float r, float h){

    return 3.14*r*r*h;
}

int volume(float a, float b, float c){

    return a*b*c;
}

int volume(float a){
    return a*a*a;
}

int main(){ 

    cout<<"The sum of 2 and 5 is "<<sum(2,5)<<endl; 

    cout<<"The sum of 2 , 5 and 8 is "<<sum(2,5,8);
    
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;

    cout<<"The volume of cuboid of lenght 2, breadth 3, height 9 is "<<volume(2,3,9)<<endl;

    cout<<"The volume of cube of side 5 is "<<volume(5);

    return 0;
}