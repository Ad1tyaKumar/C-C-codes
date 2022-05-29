#include<iostream>
using namespace std;

// inline int product( int a, int b){
//     /*inline functions are not reccommended in static variables*/
//     static int c=0; //----> It executes only once.
//     c=c+1; //---> It is the short form of c=c+1;
//     return a*b+c;

// }

float depositfund(int amount, float interest=1.05){

    float x= amount*interest; 

    return x;


}




int main(){
    // int a,b;
    // cout<<"Enter the desired values "<<endl;
    
    // cin>>a>>b;

    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    int a,b;

    cout<<"Enter the amount to deposit "<<endl;
    cin>>a;

    int money=a;

    cout<<"You added RS "<<a<<" then you will get RS "<<depositfund(money)<<" next year.\n";//Here the money is the "DEFAULT ARGUMENT".
    cout<<"If you are under THE VIP's and you added RS "<<a<<" then you will get RS "<<depositfund(money,1.17)<<" next year.";
    

    

    return 0;
} 