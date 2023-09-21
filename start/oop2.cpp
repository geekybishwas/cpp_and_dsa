#include <iostream>
using namespace std;
class Shop{
    int itemId[20];
    int itemPrice[20];
    int counter = 0;
    public:
        void setPrice(void);
        void displayPrice(void);
};
void Shop::setPrice(void)
{
        cout << "Enter ID of your item no " << counter + 1 << endl;
        cin >> itemId[counter];
        cout << "Enter Price of your item " << endl;
        cin >> itemPrice[counter];
        counter++;
}
void Shop::displayPrice(void)
{
        for (int i = 0; i < counter;i++)
            cout << "The id of your item is " << itemId[i] << " and price is " << itemPrice[i] << endl;
}
int main()
{
        Shop d;
        d.setPrice();
        d.displayPrice();
}