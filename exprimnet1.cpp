#include<iostream>
// Made a cutted horned diamond
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows "<<endl;
    cin>>n;

    for(int a=1;a<=n;a++){

        for(int b=1;b<=n-a;b++){
            cout<<" ";
        }
        for(int c=1;c<=2*a;c++){

            cout<<"*";
        }

        cout<<endl;

    }
    for(int a=1;a<n;a++){
        for(int d=1;d<=a;d++){
            cout<<" ";
        }
        for(int e=1;e<=2*(n-a);e++){
            cout<<"*";
        }
        cout<<endl;
    }



    return 0;
}