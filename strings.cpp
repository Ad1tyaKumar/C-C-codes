#include<iostream>
#include<string>

using namespace std;

int main(){

    // string s1="fam";
    // string s2="ily";

    // cout<<s1+s2;         ------> family
    // cout<<s1.append(s2); ------> family

    // cout<<s1[1];         ------> a

    // s1.clear();          //------> Clears the string

    //  cout<<s2.compare(s1)<<endl;  ------> 1
    
    // cout<<s1.empty(); /*Checks whether s1 string is clear or not, in True or false (1,0) */

    // cout << s1.erase(1,1) ; //-----> in s1.erase(a,b)  a- point from where it should start erasing 
    //                                                    b- no of letters required be erased


    string s1= "adityakumar";

    // cout << s1.find("yak");    //-----------> It will print the location of first yak found and it is 4

    cout<< s1.insert(6,"420");  //---------> aditya420kumar

    return 0;
}