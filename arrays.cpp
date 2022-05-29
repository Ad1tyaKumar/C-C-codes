#include<iostream>

using namespace std;

int main(){

    int marks[] = {99,78,77,89};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<endl;
    

    //Printing the all the values of marks

    // for(int i=0;i<4;i++)
    // {

    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
    
    //Using While or do-While loops

    // int i=0;
    // while(i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }


    // int i=0;
    // do
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<4);

    // Pointer and arrays

    int* p= marks;
    
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<endl;

    cout<<*(p++)<<endl; /*now the value of p has changed to p+1 */
    cout<<*p<<endl; /*As exoected its printing 78 as p has changed to p+1*/

    cout<<*(++p);


    return 0;
}