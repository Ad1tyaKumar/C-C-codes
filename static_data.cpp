#include <iostream>
using namespace std;

class employee
{
    int EID;
    // int count;    ---> If we dont use static int its value resets for different objects
    static int count;

public:
    void getdata(void);
    void setdata(void);
    static void employees(void);  /*It will make count the part of class not the objects of class*/
};
void employee ::setdata(void)
{
    cout << "Enter the employee ID " << endl;
    cin >> EID;
    count++;
}
void employee ::getdata(void)
{
    cout << "The employee ID is " << EID<<endl;
    //  << " employee number is " << count<<endl;
}

void employee ::employees(void){
    cout<<"Number of employees are "<<count<<endl;
}

int employee :: count;

int main()
{

    employee aditya, ashutosh, manoj;
    aditya.setdata();
    aditya.getdata();
    employee:: employees();


    ashutosh.setdata();
    ashutosh.getdata();
    employee:: employees();


    manoj.setdata();
    manoj.getdata();
    employee:: employees();
    return 0;
}