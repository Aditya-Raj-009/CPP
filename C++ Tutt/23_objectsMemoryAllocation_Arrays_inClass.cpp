#include<iostream>
using namespace std;

/**
 * when we creates a class: 
 * then for every object there will be differen memory location are assigned.
 * but not for common one .i.e functions which are common for all objects
 * are assigned to the  one memory location.
*/

class Shop{
    int item_id[100],item_price[100],counter;
    public : 
    void initCounter(void){counter = 0;}
    void displayPrice(void);
    void setPrice(void);


};

void Shop::setPrice(void)
{
    cout<<"Enter Id of your item."<<endl;
    cin>>item_id[counter];
    cout<<"Enter Price of your item."<<endl;
    cin>>item_price[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for(int i=0; i<counter; i++)
    {
        cout<<"The Price of item with id "<<item_id[i]<<" is "<<item_price[i]<<endl;
    }
}
int main()
{
    Shop* shop = new Shop();

    shop->initCounter();
    shop->setPrice();
    shop->setPrice();
    shop->setPrice();
    shop->setPrice();
    shop->setPrice();
    shop->displayPrice();
    

    return 0;
}
