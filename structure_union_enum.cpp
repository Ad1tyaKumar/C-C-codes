#include<iostream>
#include<iomanip>

using namespace std;

typedef struct student{

    int IDcard_no;
    char favChar;
    float marks;
}st;

union money{       /*Lets assume the size of the programs as*/

    int rice_kg;  //4
    char car;     //1
    float pounds; //4
};




int main(){
    // struct student aditya;  
    // st aditya;
    // // struct student ashutosh; /*we can also add another student in here*/
    
    // aditya.IDcard_no =17;
    // aditya.favChar='x';
    // aditya.marks=77.4;
    
    // cout<<"The value of aditya's IDcard_no is "<<aditya.IDcard_no<<endl;
    // cout<<"The value of aditya's favChar is "<<setw(4)<<aditya.favChar<<endl; /*Here i have used setw so that the layout is perfect :)*/
    // cout<<"The value of aditya's marks is "<<setw(6)<<aditya.marks<<endl;
    
    // union money Mone;
    // Mone.rice_kg=2;
    // Mone.car='c';
    // Mone.pounds=3.9;

    // //Here we will only get the value of Mone.pounds correctly as it overwrites the other values in the memory 
    
    // cout<<Mone.pounds<<endl;
    // cout<<Mone.car<<endl;
    // cout<<Mone.rice_kg;
    enum meal{breakfast, lunch , dinner};
    meal M1=lunch;
    
    cout<<(M1==1)<<endl;
    cout<<(M1==2); 

   
    return 0;
}