#include<iostream>

using namespace std;

int main(){
    int age;
        cout<<"What's your age? "<<endl;
    cin>>age;
    /* Selection control structure : if else-else if ladder*/

    // if(age<18){
    //     cout<<"Go away kid!";}
    //     else if(age==18){
    //         cout<<"You can have daaru but only 1 peg."<<endl;
    //         }
    //     else if (age>55){
    //         cout<<"OK Boomer! No vodka for you.";
    //     }


    //     else{
    //         cout<<"You can have 4 bottle vodka"<<endl;
              
    //         }
    
    //Selection control structure: Swtich case statements

    switch (age)
    {
    case 18 : 
    cout<<"You are 18"<<endl;
        break;
    case 22: 
    cout<<"You are 18+"<<endl;
        break;
    case 10 : 
    cout<<"You are not 18+"<<endl;
        break;
    default:
    cout<<"Sorry you donot fall in any special age."<<endl;
        break;
    }
    cout<<"You may leave now.";

     return 0;
}       

  