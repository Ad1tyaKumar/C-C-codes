#include<iostream>
using namespace std;
class c2;
class c1 {
    int a;
    friend void swap(c1 &, c2 &);
    public: 
    void input(int b){
        a=b;
    }
    void output(void){
        cout<<a<<endl;
    }
};
class c2 {
    int c;
    friend void swap(c1 &, c2 &);
    public: 
    void input(int d){
        c=d;
    }
    void output(void){
        cout<<c<<endl;
    }
};

void swap(c1 & x,c2 & y){
    int k;
    k=x.a;
    x.a=y.c;
    y.c=k;
}

int main(){

c1 a;
c2 b;

a.input(69);
b.input(420);

swap(a,b);

cout<<"The value in c1 after exchanging is ";
a.output();

cout<<"The value in c2 after exchanging is ";
b.output();



return 0;
}