#include <iostream>
using namespace std;

    class store
    {
        int ItemPrice[100];
        int ItemCode[100];
        int Item_number = 0;

    public:
        
        void getdetails(void);
        void display(void);
    };
    void store :: getdetails(void){
        cout<<"Enter the item code "<<endl;
        cin>>ItemCode[Item_number];
        cout<<"Enter the price of Item "<<endl;
        cin>>ItemPrice[Item_number];
        Item_number++;
        
    }
    
    void store :: display(void){
        for(int i=0; i<Item_number;i++){
        cout<<"The price of item code "<<ItemCode[i]<<" you entered is "<<ItemPrice[i]<<endl;
        
        }
    }
int main()
{
    store prices;
    prices.getdetails();
    prices.getdetails();
    prices.getdetails();

    prices.display();

   

        return 0;
}