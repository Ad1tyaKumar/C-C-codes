#include<iostream>
using namespace std;

int main(){

int n;
int *p;

cout<<"Enter the size of array"<<endl;
cin>>n;

p=new int[n];
cout<<"Enter the elements of array"<<endl;

for (int i = 0; i < n; i++)
{
    cin>>p[i];
}

cout<<"The elements of the array are "<<endl;
for (int i = 0; i < n; i++)
{
    cout<<p[i]<<" ";
}

delete p;


return 0;
}