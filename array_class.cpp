#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:
    void setdata(void);
    void getdata(void);
};

void employee ::getdata(void){
    cout<<"Enter the employee ID "<<endl;
    cin>>id;
}
void employee ::setdata(void){
    cout<<"The ID of employee is "<<id<<endl;
}


int main(){
    int n;
cin>>n;
employee data[n];       /*we can store objects in arrays*/

for (int i = 0; i < n; i++)
{
  data[i].getdata();
  data[i].setdata();
}




return 0;
}