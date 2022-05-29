#include <iostream>

using namespace std;

int main()
{

    /*There are three types of lopps-:
         1.For loop
         2.While loop
         3.do-While loop*/

    /*For loops in C++*/

    //Syntax for 'for loop'
    // for (initialization; condition; updation)
    // {
    //     loop body(C++ code)
    // }

    // for(int i=0; i<=30; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*While loops in C++*/

    //Syntax for 'while loop'
    //while (condition)
    // {
    //      C++ statements;
    // }

    //    int i=1;
    //    while(i<=25)
    //    {
           
    //        cout<<i<<endl;
    //        i++;
    //    }
    
    /*do while loops in C++*/

    //Syntax for do while loops 
    // do {
    //    C++ statements;
    // }while(condition);

    /*IN do while LOOP EVEN THOUGH CONDITION IS FALSE IT WILL PRINT THE INITIAL NUMBER*/
    // int i=1;
    // do {
    // cout<<i<<endl;
    // i++;
    
    // }while(false);
    
   //     **************** PRINTING THE TABLE OF 6 ****************

    // for(int i=1; i<=10; i++)
    //    cout<<i*6<<endl;

    // int i=1;
    // while(i<=10){
    //     cout<<i*6<<endl;
    //     i++;
    // }

    // int i=1;
    // do {

    //     cout<<i*6<<endl;
    //     i++;
    // }while(i<=10);


//     Printing a diamond
    int n;

    cout<<"Enter the no of rows "<<endl;
    cin>>n;

    for(int a=1;a<=n;a++){

        for(int b=1;b<=n-a;b++){

            cout<<" ";
        }
        for(int c=1;c<=2*a-1;c++){

            cout<<"*";   
        }
        cout<<endl;
    }
    for(int a=1;a<n;a++){
          for(int b=1;b<=a;b++){

            cout<<" "; 
        }
        for(int c=1;c<=2*(n-a)-1;c++){

            cout<<"*";   
        }
        cout<<endl;
    }
    
    return 0;
}
