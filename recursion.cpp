#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n<1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

//Find the nth term of Fibonacci sequence ----> 1,1,2,3,5,8,13,21,34......

int function(int n){
    if(n<=2){
        return 1;
    }
    return function(n-2)+function(n-1);
    }
 




int main(){
    int n;
    // cout<<"Enter a positive number "<<endl;

    // cin>>n;

    // cout<<"The factorial of "<<n<<" is "<<factorial(n);

    cout<<"enter the nth term "<<endl;

    cin>>n;

    cout<<"The nth term is "<<function(n);



    return 0;
}